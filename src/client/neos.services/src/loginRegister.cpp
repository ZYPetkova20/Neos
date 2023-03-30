#include "../include/loginRegister.h"

loginRegister::loginRegister()
{
	rows = 2;
	cols = 5;
	index = 0;
}

void loginRegister::reg(string fName, string lName, string email, string password)
{
	handler.registerHandler();
}

void loginRegister::login(string email, string password)
{
	handler.getUsers();

	/*for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			JSONData.at(i).at(j) = handler.JSONRes["data"][index++];
		}
	}

	for (const auto& row : JSONData) {
		for (const auto& elem : row) {
			std::cout << elem << " ";
		}
		std::cout << std::endl;
	}*/
}

int main()
{
	loginRegister logReg;
	logReg.login("da", "az");
}