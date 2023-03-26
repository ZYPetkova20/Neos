#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <curl/curl.h>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>

using std::string;

struct RegisterData
{
    string fname;
    string lname;
    string username;
    string email;
    string password;
};

struct loginData
{
    string loginCred;
    string pass;
};

class APIHandler {
public:
    void registerHandler(RegisterData regData);
    void getUserById(string id);
    string loginHandler(loginData logData);
};