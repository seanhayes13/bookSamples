#include <iostream>

using namespace std;

void main() {
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
	/*Let's start by doing some simple math comparisons.*/
	if (5 > 3) {
		cout << "5 is greater than 3" << endl;
	}
	else {
		cout << "5 is not greater than 3" << endl;
	}

	if (5 < 3) {
		cout << "5 is less than 3" << endl;
	}
	else {
		cout << "5 is not less than 3" << endl;
	}

	if (4 <= 4) {
		cout << "4 is less than or equal to 4" << endl;
	}
	else {
		cout << "4 is not less than or equal to 4" << endl;
	}

	//Logical operators
	/*For this section we are going to start by checking the four possibilities of
	an AND table and the four possibilities of an OR table. To refresh your minds:
	they look like this:
	
	AND		T		F		In an AND table, the result is
		+-------+-------+	only true if BOTH are true
	T	|	T	|	F	|
		+-------+-------+
	F	|	F	|	F	|
		+-------+-------+
	
	OR		T		F		In an OR table, as long as one
		+-------+-------+	value is true, the result is true
	T	|	T	|	T	|
		+-------+-------+
	F	|	T	|	F	|
		+-------+-------+

	*/

	cout << "AND Testing" << endl;
	//If we run the next three if statements, only one should return.
	if (true && true) {
		cout << "1 - true" << endl;
	}
	if (true && false) { //Only need to test this once
		cout << "2 - true" << endl;
	}
	if(false && false) {
		cout << "3 - true" << endl;
	}

	cout << "OR Testing" << endl;
	//Now, let's switch those ANDs to ORs and run again. This time,
	//we should see two
	if (true || true) {
		cout << "1 - true" << endl;
	}
	if (true || false) { //Only need to test this once
		cout << "2 - true" << endl;
	}
	if (false || false) {
		cout << "3 - true" << endl;
	}

	/*There is nothing stopping you from chaining together a series of ANDs, ORS
	or ANDs and ORs (confused yet?) to suit the needs of your program. Just know that the more
	statements, the harder it will be to debug or fix. In the book, we used an
	example of going to the movies, let's see what that would look like:*/
	double ticketCost = 7.95;
	/*Notice here I switch from using camelCase to using underscores. That is 
	because in this case, using camelCasing results in a confusing variable name:
	movieAPlaying*/
	bool movie_A_playing = true;
	bool movie_B_playing = false;
	double moneyAvailable = 6.50;
	/*In our first run, we are going to check if we have enough money for a ticket
	and see if either movie is playing. I have hard coded this run if we do not have
	enough money for a ticket.*/
	if (moneyAvailable >= ticketCost && (movie_A_playing || movie_B_playing)) {
		cout << "I'm going to the movies!!!" << endl;
	}
	else {
		cout << "Staying home is cool too..." << endl;
	}

	/*Now let's increase availableMoney so that we can afford a ticket and try again*/
	moneyAvailable = 10.50;
	if (moneyAvailable >= ticketCost && (movie_A_playing || movie_B_playing)) {
		cout << "I'm going to the movies!!!" << endl;
	}
	else {
		cout << "Staying home is cool too..." << endl;
	}

	system("pause");
}
