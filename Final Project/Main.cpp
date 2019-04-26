#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
#include "Identity.h"
#include "Descriptors.h"


// allows the use of standard namespace
using namespace std;

// this creates a text file with the users new identity
void createIdentityFile(string & name, vector<string> * info);

///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	// 
	srand(time(NULL));
	// creating an identity object named name
	Identity name;
	// creating a descriptors object named desc
	Descriptors desc;

	// welcomes the user and tells them what the program does
	cout << "\n\n\tWelcome to the Identity Generator.\n";
	cout << "This program will allow you to choose a new identity\n\n";

	// runs the typeName function
	name.typeName();
	// do this
	do
	{
		name.randomizeNames();
		// welcomes the user by name
		cout << "\nWelcome " << name.username << ", please choose an identity by typing its number.\n\n";
		// Shows a list of names the user can choose from
		name.listOfNames();
		// allows the user to choose a name
		desc.chooseName(name.randomName);
		// asks if they are sure about their choice
		desc.yesOrNo();

		// clears the screen
		system("cls");
		// while they haven't answered yes, loop back until yes.
	} while (desc.yN != "y");

	// creates the text file with the users new identity 
	createIdentityFile(desc.newName, &desc.newInfo);

	// confirms the useres new identity
	cout << "\nNew identity generated. Welcome " << desc.newName << ", try not to get exposed next time.\n\n";
	// pause so user can read
	system("pause");
	// ends
	return 0;
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////

}
// this function helps create the text file
// Saves the text in the same location as the executable
void createIdentityFile(string & name, vector<string> * info) {
	// file name
	string temp_name;
	// users new name .txt
	temp_name = name + ".txt";

	//open a new file
	ofstream new_file(temp_name);
	// goes through the info vector and writes a new line for each piece of info
	for (int i = 0; i < info->size(); i++) {
		new_file << info->at(i) << endl;
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////////
};