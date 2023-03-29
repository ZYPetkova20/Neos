#include <cpr/cpr.h>
#include <string>
#include <nlohmann/json.hpp>
#include "APIHandler.h"

int main() 
{
	APIHandler apiHandler;
	apiHandler.registerHandler();
}