//============================================================================
// Name        : Lab3Functions.cpp
// Author      : Nicholas Requena
// Version     : v0.2
// Description : An Algorithm that find the Max. and Min. values in an
//				 input given array.
//============================================================================

#include <iostream>
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



float FindMax(float Array[])
{								//Function to find the maximum #, in a 5 digit array.
	float TempMax;
	float MyMax;
	TempMax = Array[0];

	for (int i=0; i<5; i++)		//Loops 5 times, which correlates to each array element.
	{
		if (Array[i] > TempMax)	//When the current number in the array element is greater than TempMax,
			TempMax = Array[i];	//Reassign TempMax to the new highest number.
	}

	MyMax = TempMax;			//Set the final number of TempMax to MyMax.

	return MyMax;				//Function returns MyMax, the highest number of the array.
}



float FindMin(float Array[])
{								//Function to find the minimum #, in a 5 digit array.
	float TempMin;
	float MyMin;
	TempMin = Array[0];

	for (int i=0; i<5; i++)		//Loops 5 times, which correlates to each array element.
	{
		if (Array[i] < TempMin)	//When the current number in the array element is greater than TempMax,
			TempMin = Array[i];	//Reassign TempMax to the new highest number.
	}

	MyMin = TempMin;			//Set the final number of TempMax to MyMax.

	return MyMin;				//Function returns MyMax, the highest number of the array.
}



float optionSelect(int choice, float ArrayParameter[])
{								//Function to display the results of FindMax or FindMin functions.
	float i;

	switch (choice)
	{
		case 9:					//When 9 is typed, print MyMax.
			cout << "The Highest number in the array is: " << FindMax(ArrayParameter);
			i = FindMax(ArrayParameter);
			break;

		case 0:					//When 0 is typed, print MyMin.
			cout << "The Lowest number in the array is: " << FindMin(ArrayParameter);
			i = FindMin(ArrayParameter);
			break;

		default:				//When neither 0 or 9 is typed, default the this printed statement.
			cout << "You typed a wrong value. Restart the program and try again.";
			break;
	}

	return i;					//Return resutls.
}
