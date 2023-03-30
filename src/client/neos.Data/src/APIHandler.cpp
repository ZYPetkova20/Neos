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
        std::cout << r.text;
    }
    else {
        std::cout << "Error posting data: " << r.text << "\n";
    }
}

std::string APIHandler::loginHandler(loginData logData)
{
    
}