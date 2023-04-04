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

void APIHandler::reactions()
{
    json jsonData = nlohmann::json{
        "water", false,
        "fName", "dnes"
    };

    cpr::Response r = cpr::Post(
        cpr::Url{ "http://localhost:8000/api/reactions" },
        cpr::Authentication{ "neosadmin", adminPasswordString },
        cpr::Body{
            jsonData.dump()
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

// read admin password from .env file
void APIHandler::registerHandler()
{
    // create JSON object with user data
    json jsonData = nlohmann::json{
        {"firstName", "dnes"},
        {"lastName", "ez"},
        {"email", "utre3"},
        {"password", "data"},
    };

        cpr::Response r = cpr::Post(
        cpr::Url{ "http://localhost:8000/api/users" },
        cpr::Authentication{ "neosadmin", adminPasswordString },
        cpr::Body{
            jsonData.dump()
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

bool APIHandler::checkLoginRegister(string eneteredFName, string enteredLName, string enteredEmail, string enteredPassword, string logReg)
{
    // extract email and password of each user from response JSON
    for (const auto& obj : JSONRes) {
        //email
        string email = obj.at("email").get<string>();
        emails.push_back(email);

        //password
        string password = obj.at("password").get<string>();
        passwords.push_back(password);

        //first name
        string firstName = obj.at("firstName").get<string>();
        firstNames.push_back(firstName);

        //last name
        string lastName = obj.at("lastName").get<string>();
        lastNames.push_back(lastName);
    }

    // check if matching email and password are found
    bool foundPassword = false;
    for (const auto& password : passwords) {
        if (enteredPassword == password)
        {
            foundPassword = true;
            break;
        }
    }

    bool foundEmail = false;
    for (const auto& email : emails) {
        if (enteredEmail == email) {
            foundEmail = true;
            break;
        }
    }

    bool foundFirstName = false;
    for (const auto& firstName : firstNames) {
        if (eneteredFName == firstName) {
            foundFirstName = true;
            break;
        }
    }

    bool foundLastName = false;
    for (const auto& lastName : lastNames) {
        if (enteredLName == lastName) {
            foundLastName = true;
            break;
        }
    }

    if (logReg == "login")
        return foundEmail && foundPassword;
    else if (logReg == "register")
        return foundEmail || foundPassword || foundFirstName || foundLastName;
    else
        return;
}

string APIHandler::getFirstName(string enteredEmail)
{
    // extract email and password of each user from response JSON
    int index = 0;
    string fName;
    for (const auto& email : emails) {
        if (enteredEmail == email) {
            // extract firstName of each user from response JSON
            obj = JSONRes[index];
            fName = obj.at("firstName");
            
            break;
        }
        index++;
    }

    return fName;
}

string APIHandler::getLastName(string enteredEmail)
{
    // extract email and password of each user from response JSON
    int index = 0;
    string lName;
    for (const auto& email : emails) {
        if (enteredEmail == email) {
            // extract firstName of each user from response JSON
            obj = JSONRes[index];
            lName = obj.at("lastName");

            break;
        }
        index++;
    }

    return lName;
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