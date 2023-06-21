#pragma once

#include <exception>
#include <string>
#include <string.h>
#include <algorithm>
#include <list>
#include <sstream>

#include "../connection/connection.h"		// winsock2 and ws2tcpip are include in connection.cpp / winsock2 also included in chat.cpp

class Chat : public Connection
{
public:
	Chat();
	~Chat();

	// Case '1'
	void registration();

	// Case '2'
	bool enterToAccount();
	std::string GetNameByLogin(const std::string& login); 

	// Case '2'::Case '1'::Case '1'
	void sendMessage();
	void sendToClientAllUsersExceptCurrentUser();

	// Case '2'::Case '1'::Case '2'
	void groupChat(); // needs to be improved

	// Case '2'::Case '2'
	void sendToClientAllHisMessages();

	// Case '2'::Case '3'
	void setNewPass();

	// Case '2'::Case '4'
	void exitFromAccount();

	// Case '3'
	void sendToClientAllUsers();

private:
	std::string _userName;
	std::string _login;
	std::string _password;
	std::string _message;
};