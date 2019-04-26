#include <iostream>
#include <string>
#include <vector>
#include "Identity.h"
#include "Descriptors.h"
using namespace std;
// sets the int for random, min and max
int random(int min, int max);

// constructor 
Identity::Identity()
{
	// calls the function
	randomizeNames();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// randomizes the names
void Identity::randomizeNames() 
{
	// clears the name so the user gets a new list of names
	randomName.clear();
	// list of first names
	vector<string> first = { "David" , "Robert" , "Nathan" , "Roger" , "Nicole" , "Derick" , "Sara" , "Sarah" , "Jack" , "Charlie" };
	// list of last names
	vector<string> last = { "Smith" , "Stewart" , "Rogers" , "Ray" , "Nickels" , "Doine" , "Johnson" , "Garcia" , "Martinez" , "Brown" };
	// creates 5 random names to the random names vector
	for (int i = 0; i < 5; i++) {
		randomName.push_back(first.at(random(0, first.size() - 1)) + " " + last[random(0, last.size() - 1)]);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// asks the user to type their name and takes in the users imput
void Identity::typeName()
{
	cout << "\tPlease type your current first name\n\n";
	cin >> username;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// displays a list of 5 random names
void Identity::listOfNames() 
{
	cout << "1. " << randomName[0] << "\n"; 
	cout << "2. " << randomName[1] << "\n";
	cout << "3. " << randomName[2] << "\n";
	cout << "4. " << randomName[3] << "\n";
	cout << "5. " << randomName[4] << "\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

//generate random integer (generic)
int random(int min, int max) {
	return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// deconstrucor
Identity::~Identity()
{
}
