#pragma once
#include <iostream>
#include <vector>
#include <cpr/cpr.h>
#include <string>
#include <nlohmann/json.hpp>

struct user {
    std::string id;
    std::string fName;
    std::string lName;
    std::string email;
    std::string password;
};

struct registerData
{
    std::string fname;
    std::string lname;
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
    std::string registerHandler(registerData regData);
    std::string loginHandler(loginData logData);
    std::string getUserInfo(std::string username, user& user);
    std::string getUserInfoById(std::string userId, user& user);
};