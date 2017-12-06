#include <iostream>

using namespace std;

void main() {
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

	system("pause");
}
