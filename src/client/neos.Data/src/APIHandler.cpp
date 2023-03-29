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

void APIHandler::getUserById(string fName, User user)
{
    cpr::Response r = cpr::Get(cpr::Url{ "http://localhost:8000/api/users/" + fName},
        cpr::Authentication{ "neosadmin", "Zdrasti123@" });

    nlohmann::json JSONRes;

    try
    {
        JSONRes = nlohmann::json::parse(r.text);
    }
    catch (nlohmann::json::parse_error& ex)
    {
        std::cout << "There is a problem with the server! Please try again later!";
    }

    if (JSONRes["type"] == "user-success")
    {
        /*user.id = JSONRes["data"][0];
        user.fname = JSONRes["data"][1];
        user.lname = JSONRes["data"][2];*/
        user.email = JSONRes["data"][0];
        user.password = JSONRes["data"][1];
    }
    else std::cout << "The user wasn't found";
}

std::string APIHandler::loginHandler(loginData logData)
{
    
}