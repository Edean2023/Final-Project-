#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "Identity.h"
#include "Descriptors.h"

// constructor function
Descriptors::Descriptors()
{
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// takes the useres choice of what name they want and displays their info
void Descriptors::chooseName(vector<string> & names) 
{
	// take user imput
	cin >> nameChoice;
	
	// if the number is less than 1 or greater than 5 default to 1
	if (nameChoice < 1 || nameChoice > 5)
	{
		nameChoice = 1;
	}

	// if choice is one, display this name and information
	if (nameChoice == 1)
	{
		// newName is equal to 0
		newName = names[0];
		newInfo = { "Age: 25" , "Height: 6'2", "Weight: 162lbs", "Eyes: Brown", "Hair: Brown" };
		cout << "\n" << newName << "\n\n";
		cout << "Age: 25\n Height: 6'2\n Weight: 162lbs\n Eyes: Brown\n Hair: Brown\n\n";

	}
	// if choice is two, display this name and information
	else if (nameChoice == 2) 
	{
		// newName is equal to 1
		newName = names[1];
		newInfo = { "Age: 30" , "Height: 5'9", "Weight: 135lbs", "Eyes: Hazel", "Hair: Brown" };
		cout << "\n" << newName << "\n\n";
		cout << "Age: 30\n Height: 5'9\n Weight: 135lbs\n Eyes: Hazel\n Hair: Brown\n\n";

	}
	// if choice is three, display this name and information
	 else if (nameChoice == 3)
	{
		// newName is equal to 2
		newName = names[2];
		newInfo = { "Age: 28" , "Height: 5'11", "Weight: 142lbs", "Eyes: Blue", "Hair: Blonde" };
		cout << "\n" << newName << "\n\n";
		cout << "Age: 28\n Height: 5'11\n Weight: 142lbs\n Eyes: Blue\n Hair: Blonde\n\n";
	}
	// if choice is four, display this name and information
	else if (nameChoice == 4)
	{
		// newName is equal to 3
		newName = names[3];
		newInfo = { "Age: 34" , "Height: 5'5", "Weight: 120lbs", "Eyes: Brown", "Hair: Blonde" };
		cout << "\n" << newName << "\n\n";
		cout << "Age: 34\n Height: 5'5\n Weight: 120lbs\n Eyes: Brown\n Hair: Blonde\n\n";

	}
	// if choice is five, display this name and information
	else if (nameChoice == 5)
	{
		// newName is equal to 4
		newName = names[4];
		newInfo = { "Age: 38" , "Height: 5'4", "Weight: 115lbs", "Eyes: Brown", "Hair: Brown" };
		cout << "\n" << newName << "\n\n";
		cout << "Age: 38\n Height: 5'4\n Weight: 115lbs\n Eyes: Brown\n Hair: Brown\n\n";
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// asks user if they are sure about their choice
void Descriptors::yesOrNo() 
{
	cout << "Are you sure this is the identity you choose? Type 'y' or 'n' to answer\n\n";
	// takes user input
	cin >> yN;
	// converts the users input to lowercase letters
	transform(yN.begin(), yN.end(), yN.begin(), ::tolower);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// deconstrutor
Descriptors::~Descriptors()
{
}
