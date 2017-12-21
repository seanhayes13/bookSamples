#include <iostream>
#include <string>

using namespace std;

void main() {
	/*Section ? - Basic Input-Output*/
	cout << "\n\n############\nSection ? - Basic Input-Output\n############" << endl;
	/*Your programs are not going to be very user friendly if the user cannot
	interact with them without changing the base code, NOT something you want.
	So, we have to handle getting input from the user and acting on it. You have
	seen the cout command to print information to the screen, now to get input.
	Let's start by getting a user's name*/
	//First you will want to print a message to the screen, prompting the user
	cout << "Enter your name: ";
	/*Note how I did not include the "<< endl;" that you have seen up til now?
	This will keep the cursor on the same line. Now we create the variable to
	hold the user's name*/
	string name;
	/*Then use the cin tool to get input from the user. Pay attention to the
	double carrots and see that they are pointing the opposite direction as they
	do when used with cout. This will get the input from the user and store in
	the name variable.*/
	cin >> name;
	/*Finally we make sure that it stored correctly.*/
	cout << "Your name is " << name << endl;

	system("pause");
}
