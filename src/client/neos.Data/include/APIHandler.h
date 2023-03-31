#pragma once // include guard to ensure this header is only included once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cctype>
#include <curl/curl.h>
#include <cpr/cpr.h> // includes for necessary libraries
#include <nlohmann/json.hpp>

using std::string; // using declarations to avoid excessive namespace specification
using json = nlohmann::json;

class APIHandler {
public:
    string adminPasswordString; // string to store the admin password
    std::ifstream myFile; // file stream to read from .env file

    json JSONRes; // JSON object to store server response
    std::vector<string> emails, passwords; // vectors to store user emails and passwords

    string enteredEmail = "da", enteredPassword = "da"; // default values for user input
    string fName, lName; // variables to store first and last name of user
    json obj; // JSON object to store user info
    int index = 0; // index to iterate through JSON array
    bool foundEmail = false, foundPassword = false; // flags to indicate if user email and password were found

    APIHandler(); // constructor to read admin password from .env file

    void registerHandler(); // function to handle user registration
    void getUsers(); // function to get user data from server
};