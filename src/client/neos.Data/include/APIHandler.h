#pragma once
#include "../../neos.App/Src/precompile.hpp"
#include <cpr/cpr.h>
#include <string>
#include <nlohmann/json.hpp>

struct user {
	string id;
	string fName;
	string lName;
	string email;
    string password;
};

struct registerData
{
    std::string fname;
    std::string lname;
    std::string username;
    std::string email;
    std::string password;
};

struct loginData
{
    std::string loginCred;
    std::string pass;
};

class APIHandler {
public:
    string registerHandler(registerData regData);
    string loginHandler(loginData logData);
    string getUserInfo(std::string username, user& user);
    string getUserInfoById(std::string userId, user& user);
};