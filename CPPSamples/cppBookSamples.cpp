// cppBookSamples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*Including iostream allows you to use send 
output to the screen and get input from the user*/
#include <iostream>
/*This include statement allows you to use
and work with Strings*/
#include <string>

#include <vector>
using namespace std;

int main()
{
	//This is a single line comment
	/*This is a multiline comment*/

	/*If using Visual Studio, to comment large blocks 
	of code, like this, highlight the whole section, 
	then press Ctrl+K+C. To uncomment press Ctrl+K+U.
	This keyboard shortcut will not work with single
	line comments*/

	/*At the beginning of each section will be a short
	description of what the section covers. The first
	line to print out will be the section header, this
	helps if you are going to run this program with
	more than one section uncommented so that you know
	what text in the output is associated with what
	section of code in the file*/

	/*Section 1 - Hello World*/
	/*The purpose of this section is to write a basic
	simple program to get you started and make sure
	that your system is set to run C++ programs.*/
	cout << "############\nSection 1 - Hello World\n############" << endl;
	cout << "Hello World" << endl;

	/*Section 2 - Datatypes and Assignment*/
	cout << "\n\n############\nSection 2 - Datatypes and Assignment\n############" << endl;
	char sampleChar = 's';
	cout << sampleChar << endl;
	int sampleInt = 42;
	cout << sampleInt << endl;
	double sampleDouble = 3.14;
	cout << sampleDouble << endl;
	bool sampleBool = true;
	/*Printing out a bool will print out 1 if true, 0 if false.*/
	cout << sampleBool << endl;
	
	/*Section 3 - Arrays*/
	cout << "\n\n############\nSection 3 - Containers\n############" << endl;
	/*We start by defining the datatype the array will hold, the name
	of the array, and the size.*/
	int primes[5];

	/*Now we will add in some data, this is one way, best
	used with small arrays.*/
	primes[0] = 2;
	primes[1] = 3;
	primes[2] = 5;
	primes[3] = 7;
	primes[4] = 11;
	cout << "primes[3] - " << primes[3] << endl;

	/*Another way to create and populate an array at the same time*/
	int evens[5] = { 2, 4, 6, 8, 10 };
	cout << "evens[2] - " << evens[2] << endl;

	/*Nested or multi-dimensional arrays are arrays within arrays.
	In this example we will create a nested array to hold the day
	time highs for each day of each month. The first array will 
	represent the months, the second will represent the days.*/
	int highs[12][31];
	/*So if we wanted to store the high for January 1st, remember
	that we need to use 0 index for both, it would look like this.*/
	highs[0][0] = 23;
	//Febrary 14th...
	highs[1][13] = 34;

	int squares[2][3] = { {1, 2, 3},{1, 4, 9} };

	/*To create a vector you need to add #include <vector> to the top
	of the file first. Then you declare a vector datatype, and specify
	what the vector will hold, followed by the name of the vector.*/
	vector<int> grades;
	/*To add a value to the end of the vector, use push_back and provide
	the value to add.*/
	grades.push_back(93);
	grades.push_back(98);
	/*To recall a specific location, use at. Be warned that if you
	try to access a position that does not exist you will get an error*/
	cout << "grades at 0 - " << grades.at(0) << endl;
	grades.push_back(403);
	/*size will give you the size of the vector*/
	cout << "grades size - " << grades.size() << endl;
	/*Removing an element comes in a couple flavors:
	- pop_back will	remove the last element in the vector
	- erase can be used to remove a group of values or the value at one
		position.*/
	/*NOTE: Only have one of these uncommented at a time or else the erase will
	not work properly.*/
	//grades.pop_back();
	grades.erase(grades.begin()+2);
	cout << "grades size - " << grades.size() << endl;


	/*Section 4 - Strings*/
	/*Before working with Strings, make sure to include them by
	adding #include <string> to the top of the file*/

	/*Section 5 - Typecasting*/

	/*Section 6 - Operators*/

	/*Section 7 - Complex Containers*/

	/*Section 8 - Control Statements*/
    return 0;
}

