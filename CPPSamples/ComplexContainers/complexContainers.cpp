#include <iostream>
#include <string>
#include <map>

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

void main() {
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
	cout << "s2's fullName: " << s2.getFullName() << endl;

	system("pause");
}
