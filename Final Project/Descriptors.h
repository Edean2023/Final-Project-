#pragma once
#include <iostream>
#include <string>
#include <vector>
// uses standard namespace
using namespace std;
// Descriptors is a child of identity
class Descriptors: public Identity
{
// sets to public
public:
	// constructor function
	Descriptors();
	// declares the chooseName function
	void chooseName(std::vector<std::string> & names);
	// declares the yesOrNo
	void yesOrNo();

	// sets string for newName
	std::string newName;
	// sets vector for newInfo
	std::vector <std::string> newInfo;

	// sets string for yN
	std::string yN;
	~Descriptors();
};

