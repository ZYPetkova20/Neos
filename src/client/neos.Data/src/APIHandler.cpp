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
int APIHandler::registerHandler(string fName, string lName, string email, string password)
{
    // create JSON object with user data
    json jsonData = nlohmann::json{
        {"firstName", fName},
        {"lastName", lName},
        {"email", email},
        {"password", password},
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
    return loginHandler(email, password);
}

int APIHandler::loginHandler(string enteredEmail, string password)
{
    getUsers();
    int i = 0;
    for (const auto& email : emails) {
        if (enteredEmail == email) {
            currentUserId = i;
            return currentUserId;
        }
        i++;
    }
    return -1;
}

bool APIHandler::checkLoginRegister(string enteredFName, string enteredLName, string enteredEmail, string enteredPassword, string logReg)
{
    getUsers();
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
        if (enteredFName == firstName) {
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
    {
        return !(foundEmail || foundPassword || foundFirstName || foundLastName);
    }
    return 0;
}

string APIHandler::getFirstName(int userId)
{
    getUsers();
    obj = JSONRes[userId];
    string fName = obj.at("firstName");
    return fName;
}

string APIHandler::getLastName(int userId)
{
    getUsers();
    obj = JSONRes[userId];
    string lName = obj.at("lastName");
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

        // extract email and password of each user from response JSON
        for (const auto& obj : JSONRes) {
            string email = obj.at("email").get<string>();
            emails.push_back(email);

            string password = obj.at("password").get<string>();
            passwords.push_back(password);
        }
    }
    else {
        std::cout << "Error posting data: " << r.text << "\n";
    }
}

//archive post method function
void APIHandler::reactionsPost()
{
    json jsonData = nlohmann::json{
        {"userId", 1},
        {"ReactionType", 4}
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

//archive get method function
void APIHandler::reactionsGet()
{
    cpr::Response r = cpr::Get(cpr::Url{ "http://localhost:8000/api/reactions/1" },
        cpr::Authentication{ "neosadmin", adminPasswordString });

    json JSONResR;

    // check if request was successful
    if (r.status_code >= 200 && r.status_code < 300) {
        try
        {
            JSONResR = json::parse(r.text);
        }
        catch (json::parse_error& ex)
        {
            std::cout << "There is a problem with the server! Please try again later!";
        }
    }
    else {
        std::cout << "Error posting data: " << r.text << "\n";
    }
}