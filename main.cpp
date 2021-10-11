/*
-> create an array class
-> read-in 5 integers from keyboard
-> print out each value multiplied by 2
-> don't store the doubled value in the array-just print the doubled values
->
*/

#include <iostream>
#include <array>

using namespace std;

int main()
{
	
	//create the array class
	array<int, 5> myIntArray;
	int arraySize = myIntArray.size();

	int userInput;

	//get the 5 integers from the keyboard
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter an integer: ";
		cin >> userInput;
		myIntArray[i] =  userInput;
	}
	
	for (int element : myIntArray)
	{
		cout << "These are your entries doubled: " << element * 2 << endl;
	}
	
	return 0;
}