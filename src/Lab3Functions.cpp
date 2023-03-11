//============================================================================
// Name        : Lab3Functions.cpp
// Author      : Nicholas Requena
// Version     : v0.3
// Description : An Algorithm that find the Max. and Min. values using a function header file.
//============================================================================

#include <iostream>
#include "functions.h"
using namespace std;



int main()
{
	float MyNums[5];					//Containers for user numbers.
	int userNumber;

	float FindMax(float Array[]);		//Declare functions
	float FindMin(float Array[]);
	float optionSelect(int choice, float ArrayParameter[]);


	//Assign input numbers, to each of the 5 positions, in the array.

	cout << "Enter 5 numbers to be used in the array.\n";				//Directions prompt
	for (int j = 0; j < 5; j++)
	{
		cout << "Enter number for array position " << j << ".\n";		//Display the position for the array
		cin >> MyNums[j];			//Assign the number entered to the position, in the array.
	}
	cout << "\n";


	//Asks the user to input 0 or 9, to display the Minimum, or Maximum value of the array respectively.

	cout << "Type '9' to view the highest number.\nType '0' to view the lowest number.\n";
	cin >> userNumber;		//Assigns userNumber to the user's input.

	optionSelect(userNumber, MyNums);


	return 0;
}


