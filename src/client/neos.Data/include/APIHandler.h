#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cctype>
#include <curl/curl.h>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>

using std::string;
using json = nlohmann::json;

class APIHandler {
public:
    string adminPasswordString;
    std::ifstream myFile;

    json JSONRes;
    std::vector<string> emails, passwords;

    string enteredEmail = "da", enteredPassword = "da";
    string fName, lName;
    json obj;
    int index = 0;
    bool foundEmail = false, foundPassword = false;
    
    APIHandler();

    void registerHandler();
    void getUsers();
};