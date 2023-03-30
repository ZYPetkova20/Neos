#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <curl/curl.h>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>

using std::string;
using json = nlohmann::json;

struct RegisterData
{
    string fname;
    string lname;
    string username;
    string email;
    string password;
};

class APIHandler {
public:
    json JSONRes;
    std::vector<string> emails, passwords;
    
    void registerHandler();
    void getUsers();
};