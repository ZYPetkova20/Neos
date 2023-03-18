#include "../include/APIHandler.h"

string APIHandler::registerHandler(registerData regData)
{
    cpr::Response r = cpr::Post(cpr::Url{ "http://localhost:8000/api/users" },
        cpr::Payload{
            {"firstName", regData.fname},
            {"lastName", regData.lname},
            {"username", regData.username},
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
        return;
    }

    return JSONRes["fields"][0];
}

string APIHandler::loginHandler(loginData logData)
{
	return string();
}

string APIHandler::getUserInfo(std::string username, user& user)
{
	return string();
}

string APIHandler::getUserInfoById(std::string userId, user& user)
{
	return string();
}
