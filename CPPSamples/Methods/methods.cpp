#include <iostream>
#include <string>

using namespace std;

void sayHello() {
	cout << "Hello!" << endl;
}

void sayGoodBye();

/*Here we set the method to return an int variable and take a string variable as a parameter*/
int wordLength(string);

void main() {
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
	cout << "Enter a word: ";
	string word;
	cin >> word;
	/*Now we are going to define a variable called wordSize of type int to hold the
	value returned by the wordLength method that we will pass the user input to.*/
	int wordSize = wordLength(word);
	cout << word << " has a length of " << wordSize << endl;

	system("pause");
}

void sayGoodBye() {
	cout << "GoodBye!" << endl;
}

/*Here we set the method to return an int variable and take a string variable as a parameter*/
int wordLength(string word) {
	int result = word.length();
	return result;
}
