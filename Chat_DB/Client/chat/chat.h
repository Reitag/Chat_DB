#pragma once

#include <iostream>

#include "../connection/connection.h"

class Chat : public Connection
{
public:
	Chat();
	~Chat();

	// Case '1'
	void registration();

	// Case '2'
	void enterToAccount();

	// Case '2'::Case '1'::Case '1'
	void sendMessage();

	// Case '2'::Case '1'::Case '2'
	void groupChat(); // needs to be improved

	// Case '2'::Case '2'
	void printUsersMessages();

	// Case '2'::Case '3'
	void setNewPass();

	// Case '3'
	void printUsersFromServer(); // also use in Case '2'::Case '2

private:
};