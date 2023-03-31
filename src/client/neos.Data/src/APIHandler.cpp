#include "../include/APIHandler.h"

//constructor
APIHandler::APIHandler()
{
    // open .env file
    myFile.open(".env");

    // open .env file
    if (!myFile.is_open()) {
        return;
    }
    // read admin password from .env file
    myFile >> adminPasswordString;
}

// read admin password from .env file
void APIHandler::registerHandler()
{
    // create JSON object with user data
    nlohmann::json  my_json = nlohmann::json{
        {"firstName", "dnes"},
        {"lastName", "ez"},
        {"email", "utre"},
        {"password", "data"},
    };

    // create JSON object with user data
    cpr::Response r = cpr::Post(
        cpr::Url{ "http://localhost:8000/api/users" },
        cpr::Authentication{ "neosadmin", adminPasswordString },
        cpr::Body{
            my_json.dump()
        },
        cpr::Header{ {"Content-Type", "application/json"} }
    );

    // check if request was successful
    if (r.status_code >= 200 && r.status_code < 300) {
        std::cout << "Data posted successfully!\n";
    }
    else {
        std::cout << "Error posting data: " << r.text << "\n";
    }
}

// function to get all users from API and check user login credentials
void APIHandler::getUsers()
{
    // function to get all users from API and check user login credentials
    cpr::Response r = cpr::Get(cpr::Url{ "http://localhost:8000/api/users"},
        cpr::Authentication{ "neosadmin", adminPasswordString });

    // check if request was successful
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

        // extract email and password of each user from response JSON
        for (const auto& obj : JSONRes) {
            string email = obj.at("email").get<string>();
            emails.push_back(email);

            string password = obj.at("password").get<string>();
            passwords.push_back(password);
        }

        // extract email and password of each user from response JSON
        for (const auto& email : emails) {
            if (enteredEmail == email) {
                foundEmail = true;

                // extract email and password of each user from response JSON
                obj = JSONRes[index];
                fName = obj.at("firstName");
                lName = obj.at("lastName");

                break;
            }
            index++;
        }


        std::cout << fName << std::endl;
        std::cout << lName << std::endl;

        // check if matching email and password are found
        for (const auto& password : passwords) {
            if (enteredPassword == password) 
            {
                foundPassword = true;
                break;
            }
        }

        // if both email and password are correct, proceed to main menu
        if (foundEmail && foundPassword) {
            //mainMenu();
            std::cout << "raboti" << std::endl;
        }
        else {
            //try again exception
        }


        // print all emails and passwords for testing purposes
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