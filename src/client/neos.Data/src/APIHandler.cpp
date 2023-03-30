#include "../include/APIHandler.h"

void APIHandler::registerHandler()
{

    nlohmann::json  my_json = nlohmann::json{
        {"id", "70"},
        {"firstName", "dnes"},
        {"lastName", "ez"},
        {"email", "utre"},
        {"password", "data"},
    };

    cpr::Response r = cpr::Post(
        cpr::Url{ "http://localhost:8000/api/users" },
        cpr::Authentication{ "neosadmin", "Zdrasti123@" },
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
        cpr::Authentication{ "neosadmin", "Zdrasti123@" });

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

        string enteredEmail = "da", enteredPassword = "da";
        bool foundEmail = false, foundPassword = false;

        for (const auto& email : emails) {
            if (enteredEmail == email) {
                foundEmail = true;
                break;
            }
        }

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