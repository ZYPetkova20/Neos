#include "../include/APIHandler.h"

void APIHandler::registerHandler(RegisterData regData)
{

    nlohmann::json  my_json = nlohmann::json{
        {"id", "70"},
        {"firstName", regData.fname},
        {"lastName", regData.lname},
        {"email", regData.email},
        {"password", regData.password},
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

std::string APIHandler::loginHandler(loginData logData)
{
    cpr::Response r = cpr::Get(cpr::Url{ "http://www.httpbin.org/digest-auth/auth/user/pass" },
        cpr::Authentication{ "neosadmin", "Zdrasti123@"});
}