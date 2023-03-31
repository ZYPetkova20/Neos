#include "../include/APIHandler.h"

APIHandler::APIHandler()
{
    myFile.open(".env");

    if (!myFile.is_open()) {
        return;
    }
    myFile >> adminPasswordString;
}

void APIHandler::registerHandler()
{
    nlohmann::json  my_json = nlohmann::json{
        {"firstName", "dnes"},
        {"lastName", "ez"},
        {"email", "utre"},
        {"password", "data"},
    };

    cpr::Response r = cpr::Post(
        cpr::Url{ "http://localhost:8000/api/users" },
        cpr::Authentication{ "neosadmin", adminPasswordString },
        cpr::Body{
            my_json.dump()
        },
        cpr::Header{ {"Content-Type", "application/json"} }
    );


    if (r.status_code >= 200 && r.status_code < 300) {
        std::cout << "Data posted successfully!\n";
    }
    else {
        std::cout << "Error posting data: " << r.text << "\n";
    }
}

void APIHandler::getUsers()
{
    cpr::Response r = cpr::Get(cpr::Url{ "http://localhost:8000/api/users"},
        cpr::Authentication{ "neosadmin", adminPasswordString });

    if (r.status_code >= 200 && r.status_code < 300) {
        try
        {
            JSONRes = json::parse(r.text);
        }
        catch (json::parse_error& ex)
        {
            std::cout << "There is a problem with the server! Please try again later!";
        }

        //std::cout << JSONRes.dump(2);

        for (const auto& obj : JSONRes) {
            string email = obj.at("email").get<string>();
            emails.push_back(email);

            string password = obj.at("password").get<string>();
            passwords.push_back(password);
        }

        for (const auto& email : emails) {
            if (enteredEmail == email) {
                foundEmail = true;

                obj = JSONRes[index];
                fName = obj.at("firstName");
                lName = obj.at("lastName");

                break;
            }
            index++;
        }


        std::cout << fName << std::endl;
        std::cout << lName << std::endl;

        for (const auto& password : passwords) {
            if (enteredPassword == password) 
            {
                foundPassword = true;
                break;
            }
        }

        if (foundEmail && foundPassword) {
            //mainMenu();
            std::cout << "raboti" << std::endl;
        }
        else {
            //try again exception
        }

        for (const auto& email : emails) {
            std::cout << email << " ";
        }
        std::cout << std::endl;

        for (const auto& password : passwords) {
            std::cout << password << " ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "Error posting data: " << r.text << "\n";
    }
}