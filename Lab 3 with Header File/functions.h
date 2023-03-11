/*
 * functions.h
 *
 *  Created on: Mar 11, 2023
 *      Author: NRequena
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include <iostream>
using namespace std;

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



#endif /* FUNCTIONS_H_ */
