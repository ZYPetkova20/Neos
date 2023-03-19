#include "../include/APIHandler.h"

std::string APIHandler::registerHandler(registerData regData)
{
    cpr::Response r = cpr::Post(cpr::Url{ "http://localhost:8000/api/users" },
        cpr::Payload{
            {"firstName", regData.fname},
            {"lastName", regData.lname},
            {"email", regData.email},
            {"password", regData.password}
        });

      nlohmann::json JSONRes;

    try
    {
        JSONRes = nlohmann::json::parse(r.text);
    }
    catch (nlohmann::json::parse_error& ex)
    {
        return "There is a problem with the server! Please try again later!";
    }

    if (JSONRes["type"] == "register-success")
    {
        return "";
    }

    std::string returnVal;

    if (JSONRes["fields"].size() != 1)
    {
        returnVal = "The following fileds are incorrect: ";

        for (auto& el : JSONRes["fields"].items())
        {
            returnVal += el.value();
            returnVal += " ";
        }
    }

    return JSONRes["fields"][0];
}

std::string APIHandler::loginHandler(loginData logData)
{
    return std::string();
}

std::string APIHandler::getUserInfo(std::string username, user& user)
{
    return std::string();
}

std::string APIHandler::getUserInfoById(std::string userId, user& user)
{
    return std::string();
}
