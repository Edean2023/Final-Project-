#pragma once
#include <iostream>
#include <string>

// creates new class called identity
class Identity
{
	// sets it to public
public:
	// saves users name as string
	std::string username;
	// stores the newly generated names
	std::vector<std::string> randomName;
	// constructor for the identity class
	Identity();
	// declares the typeName function
	void typeName();
	// declares the listOfNames function
	void listOfNames();
	// declares the randomizeNames function
	void randomizeNames();
	// sets int for nameChoice
	int nameChoice;
	// sets int for answer
	int answer;

	// deconstructor for the identity function
	~Identity();
};

