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

    std::vector<string> emails, passwords, firstNames, lastNames; 
    // vectors to store user emails and passwords

    string enteredEmail = "ppenchos54v@gmail.com", enteredPassword = "malinki12"; // default values for user input

    json obj; // JSON object to store user info
    int index = 0; // index to iterate through JSON array
    
    APIHandler(); // constructor to read admin password from .env file

    void reactions();

    void registerHandler(string fName, string lName, string email, string password); // function to handle user registration

    bool checkLoginRegister(string eneteredfName, string enteredlName, string enteredEmail, string enteredPassword, string logReg);
    string getFirstName(string enteredEmail);
    string getLastName(string enteredEmail);
    void getUsers(); // function to get user data from server
};