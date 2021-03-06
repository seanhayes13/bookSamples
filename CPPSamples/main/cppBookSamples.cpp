// cppBookSamples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "splitFile.h"
/*Including iostream allows you to use send 
output to the screen and get input from the user*/
#include <iostream>
/*This include statement allows you to use
and work with Strings*/
#include <string>
#include <map>
#include <vector>

using namespace std;

/*This is where you would normally define structs*/
struct Student2 {
	string firstName;
	string lastName;
	int grades[50];

	/*This basic method returns the first and last names
	separated by an empty space.*/
	string getFullName() {
		return firstName + " " + lastName;
	}
};

void sayHello() {
	cout << "Hello!" << endl;
}

void sayGoodBye();

void sayGoodByeFromExternal();

/*Here we set the method to return an int variable and take a string variable as a parameter*/
int wordLength(string);

int main()
{
	//This is a single line comment
	/*This is a multiline comment*/

	/*If using Visual Studio, to comment large blocks of code, like this, 
	highlight the whole section, then press Ctrl+K+C. To uncomment press 
	Ctrl+K+U. This keyboard shortcut will not work with single line comments*/

	/*At the beginning of each section will be a short description of what 
	the section covers. The first line to print out will be the section header,
	this helps if you are going to run this program with more than one section 
	uncommented so that you know what text in the output is associated with what
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

	/*Nested or multi-dimensional arrays are arrays within arrays. In this example
	we will create a nested array to hold the day time highs for each day of each 
	month. The first array will represent the months, the second will represent the 
	days.*/
	int highs[12][31];
	/*So if we wanted to store the high for January 1st, remember that we need to
	use 0 index for both, it would look like this.*/
	highs[0][0] = 23;
	//Febrary 14th...
	highs[1][13] = 34;

	int squares[2][3] = { {1, 2, 3},{1, 4, 9} };

	/*To create a vector you need to add #include <vector> to the top of the file
	first. Then you declare a vector datatype, and specify what the vector will hold,
	followed by the name of the vector.*/
	vector<int> grades;
	/*To add a value to the end of the vector, use push_back and provide the value
	to add.*/
	grades.push_back(93);
	grades.push_back(98);
	/*To recall a specific location, use at. Be warned that if you try to access 
	a position that does not exist you will get an error*/
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
	/*Before working with Strings, make sure to include them by adding 
	#include <string> to the top of the file*/

	/*Section 5 - Typecasting*/
	cout << "\n\n############\nSection 5 - Typecasting\n############" << endl;
	int a = 3;
	//If we add 1.1 to a, we will lose .1 and a will become 4
	double b = static_cast<double>(a);
	//If we were to now add 1.1 to b we will get 4.1
	b += 1.1;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	/*Section 6 - Operators*/
	cout << "\n\n############\nSection 6 - Operators\n############" << endl;
	//Have already been working with = so skip that
	//Basic Math operators
	int c = 5;
	int d = 3;
	cout << "Setting a equal to 5 and b equal to 3" << endl;
	cout << "Add: " << c + d << endl;
	cout << "Subtract: " << c - d << endl;
	cout << "Multiply: " << c * d << endl;
	cout << "Divide: " << c / d << endl;
	double e = 3.1;
	double f = 1.5;
	cout << "Setting c equal to 3.1 and d equal to 1.5" << endl;
	cout << "Add: " << e + f << endl;
	cout << "Subtract: " << e - f << endl;
	cout << "Multiply: " << e * f << endl;
	cout << "Divide: " << e / f << endl;
	//Modulus
	//Earlier we divided 5 by 3 and got 1 in return
	//Now if we ask for the modulus of 5 and 3, we will get
	//the remainder of that divide operation
	cout << "Modulus of 5 and 3: " << c % d << endl;

	//Greater than, less than, greater than or equal to, less than or equal to
	//Logical operators

	/*Section 7 - Complex Containers*/
	cout << "\n\n############\nSection 7 - Complex Containers\n############" << endl;
	//Maps in C++ require that you specify the data type for the key and the value
	map<string, string> sampleMap;
	//To create an entry, simply refer to the map, specify a key, and assign a value
	//mapName[key] = value;
	sampleMap["firstName"] = "Jon";
	sampleMap["lastName"] = "Snow";
	cout << "You know nothing " << sampleMap["firstName"] << " " << sampleMap["lastName"] << endl;

	/*Another complex container in C++ is the struct, short for structure, and 
	is one of the first steps in moving towards Classes. A struct is an object
	that you can use to build a collection of variables and methods. Below we 
	will build a struct for storing student information. Note that no values are
	provided, this is just a blueprint. In normal coding, a	struct will be defined 
	outside of the main method so that it can be used elsewhere in the program.*/
	struct Student {
		string firstName;
		string lastName;
		int grades[50];
	};
	/*Now that we have designed the blueprint, we can access it's members using
	dot notation.*/
	Student s1 = Student();
	s1.firstName = "John";
	s1.lastName = "Smith";
	s1.grades[0] = 98;
	cout << "s1's full name: " << s1.firstName << " " << s1.lastName << endl;

	/*Now we will use the Student2 struct above outside of the main method*/
	Student2 s2 = Student2();
	s2.firstName = "Sarah";
	s2.lastName = "Jane";
	/*In Student2 we added a method that returns the student's full name. This
	can be helpful if you want to provide a special format.	To use, or call, 
	the method, use the dot notation to get the	method, and add a set of parantheses*/
	cout << "s2 fullName: " << s2.getFullName() << endl;

	/*Section 8 - Control Statements*/
	cout << "\n\n############\nSection 8 - Control Statements\n############" << endl;
	cout << "\n\n -----------For loops\n" << endl;
	/*For loop
	To set up a for loop, you start with the for keyword
	followed by a set of parentheses. Inside the parentheses
	you need to specify the following information:
		- Where to start
		- The conditions to check to keep going
		- How to change between each iteration
	After the parentheses, inside a set of curly brackets, you
	specify the actions to take.
	In the example below, we set the start at 0, keep going as
	long as i is less than 10, and to increment by one with each run*/
	cout << "Count up..." << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Step " << i << endl;
	}
	/*For loops can also be modified to countdown*/
	cout << "Count down..." << endl;
	for (int i = 10; i >= 0; i--) {
		cout << "Step " << i << endl;
	}

	//while
	cout << "\n\n-----------While" << endl;
	/*While loops are another loop that works by checking if a condition is met,
	then executes the code within the curly brackets. If the condition is not met,
	the while loop will not run.In the example below, we are going to print all 
	multiples of 2 (2, 4, 8, 16...) less than 100*/
	int i = 1;
	while (i < 100) {
		cout << "Step " << i << endl;
		i *= 2;
	}

	//do... while
	cout << "\n\n -----------Do... While" << endl;
	/*While and do...while loops operate very similarly to each other with one 
	difference. A while loop checks the condition before ever running, a do...while
	loop will run through the code within at least once before checking the condition.
	In the example below we will print out odd numbers less than 10*/
	int j = 1;
	do {
		cout << "Step " << j << endl;
		j += 2;
	} while (j < 10);

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
	//cin >> name;
	///*Finally we make sure that it stored correctly.*/
	//cout << "Your name is " << name << endl;

	/*Section ? - Methods*/
	cout << "\n\n############\nSection ? - Methods\n############" << endl;
	/*The first part to writing clean code is methods. Methods prevent you from
	having to copy and paste blocks of code to multiple locations within your program
	and trying to remember where they are if you need to make a change. There are
	a minimum of three things you need when defining a method:
		- return type
		- method name
		- parameters
	There are a couple different ways to define a method.
		- At the top of this file is a method called sayHello, this method returns
		nothing (void), takes no parameters, and only prints the word Hello to the
		screen. This is the first example.
		- The second is to place what is known as a prototype at the top, with the
		actual implementation (the definition of what the method does) at the bottom
		of the file. See how the method sayGoodBye does not have a set of curly brackets?
		Now look at the bottom of the file and you will see the same method listed 
		again, this time with content between the curly brackets.
		- Another is an extension of the second where the prototype is listed in this
		file at the top, but the actual method is placed in an external file, which
		we will do in the next section.
	With those two defined, let's call them. To call a method, use the method name
	followed by a set of parentheses. 
	*/
	sayHello();
	sayGoodBye();
	/*Now, let's try combining a couple of things covered so far into one. We are going
	to prompt the user for a word, pass it to a method called wordLength that will
	determine and return the length of the string*/
	//Get the word from the user
	//cout << "Enter a word: ";
	//string word;
	//cin >> word;
	///*Now we are going to define a variable called wordSize of type int to hold the
	//value returned by the wordLength method that we will pass the user input to.*/
	//int wordSize = wordLength(word);
	//cout << word << " has a length of " << wordSize << endl;

	/*Section ? - External Files*/
	cout << "\n\n############\nSection ? - External Files\n############" << endl;
	/*While it is entirely possible to write a program in one large file, it is
	extremely difficult to work with, especially if there are multiple developers
	on the team. There are two ways to work with external files:
		- Only a .cpp file
		- With a .h (also known as a header file) and .cpp file
	For the first example, we are going to create another file called 
	sampleExternalFile.cpp and place in the same directory as the current file. After
	creating the prototype at the top of this file, go into the other file and build
	the method. Now simply call the new method.
	*/
	sayGoodByeFromExternal();

	/*The other way to work with external files is to use a set of header and cpp
	files. To avoid confusion, I highly recommend using the same file name with
	the different extensions. Here I used splitFile.cpp and splitFile.h . Go into
	those files for more explanation, then come back here.*/

	/*If you have added #include "splitFile.h" at the top of this file, you should be 
	able to simply call the method.*/
	helloFromSplitFile();

	/*That was a long program. This is actually bad coding practice. Your main
	method should actually be shorter if possible, making calls to methods in
	other files, dividing the workload. We will refactor, change the code, this
	program in another section to make it more readable*/
    return 0;
}

void sayGoodBye() {
	cout << "GoodBye!" << endl;
}

/*Here we set the method to return an int variable and take a string variable as a parameter*/
int wordLength(string word) {
	int result = word.length();
	return result;
}