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
    string adminPasswordString; // string to store the admin password
    std::ifstream myFile; // file stream to read from .env file

    json JSONRes; // JSON object to store server response

    // vectors to store user emails and passwords
    std::vector<string> emails, passwords, firstNames, lastNames;
    

    int currentUserId = 0; // Holds the Id for the data of the logged user

    json obj; // JSON object to store user info
    int index = 0; // index to iterate through JSON array

public:
    APIHandler(); // constructor to read admin password from .env file

    void getUsers(); // method to get user data from server

    //reaction archive functions
    void reactionsPost();
    void reactionsGet();

    //login/register functions
    int registerHandler(string fName, string lName, string email, string password); // method to handle user registration
    int loginHandler(string enteredEmail, string password); // method to handle user login
    bool checkLoginRegister(string enteredFName, string enteredlName, string enteredEmail, string enteredPassword, string logReg);
    string getFirstName(int userId);
    string getLastName(int userId);
};