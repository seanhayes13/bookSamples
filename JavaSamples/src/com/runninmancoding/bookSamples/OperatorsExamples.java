package com.runninmancoding.bookSamples;

public class OperatorsExamples {
	public static void main(String[] args){
		System.out.println("\n\n############\nSection 6 - Operators\n############");
		//Have already been working with = so skip that
		//Basic Math operators
		int a = 5;
		int b = 3;
		System.out.println("Setting a equal to 5 and b equal to 3");
		System.out.println("Add: " + (a + b));
		System.out.println("Subtract: " + (a - b));
		System.out.println("Multiply: " + (a * b));
		System.out.println("Divide: " + (a / b));
		//Now let's work with some doubles
		double c = 3.1;
		double d = 1.5;
		System.out.println("Setting c equal to 3.1 and d equal to 1.5");
		System.out.println("Add: " + (c + d));
		System.out.println("Subtract: " + (c - d));
		System.out.println("Multiply: " + (c * d));
		System.out.println("Divide: " + (c / d));
		//Modulus
		//Earlier we divided 5 by 3 and got 1 in return
		//Now if we ask for the modulus of 5 and 3, we will get
		//the remainder of that divide operation
		System.out.println("Modulus of 5 and 3: " + (a % b));
		//NOTE: you cannot use modulus with doubles or any number that has
		//a fractional value.

		//Greater than, less than, greater than or equal to, less than or equal to
		/*Let's start by doing some simple math comparisons.*/
		if (5 > 3) {
			System.out.println("5 is greater than 3");
		}
		else {
			System.out.println("5 is not greater than 3");
		}

		if (5 < 3) {
			System.out.println("5 is less than 3");
		}
		else {
			System.out.println("5 is not less than 3");
		}

		if (4 <= 4) {
			System.out.println("4 is less than or equal to 4");
		}
		else {
			System.out.println("4 is not less than or equal to 4");
		}

		//Double Equal
		/*The double equal sign is used to check for equality*/
		int left = 3;
		int right = 3;
		if (left == right) {
			System.out.println("3 is equal to 3");
		}
		/* Strings in Java have their own special equals method
		 * for comparing to another string. 
		 */
		if ("first".equals("first")) {
			System.out.println("These two words are the same");
		}
		String first = "first";
		String second = "first";
		if (first == second) {
			System.out.println("These two variables have the same value");
		}

		//Brackets
		//Square brackets
		int intArray[] = new int[5];
		intArray[0] = 13;
		System.out.println("The first element in the array is " + intArray[0]);
		//Curly brackets
		//Parentheses

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

		/*
		 * Your IDE may complain during these two sections about dead code,
		 *  don't worry about this, the code will still run. 
		 */
		System.out.println("AND Testing");
		//If we run the next three if statements, only one should return.
		if (true && true) {
			System.out.println("1 - true");
		}
		if (true && false) { //Only need to test this once
			System.out.println("2 - true");
		}
		if(false && false) {
			System.out.println("3 - true");
		}

		System.out.println("OR Testing");
		//Now, let's switch those ANDs to ORs and run again. This time,
		//we should see two
		if (true || true) {
			System.out.println("1 - true");
		}
		if (true || false) { //Only need to test this once
			System.out.println("2 - true");
		}
		if (false || false) {
			System.out.println("3 - true");
		}
		double ticketCost = 7.95;
        /*Notice here I switch from using camelCase to using underscores. That is 
        because in this case, using camelCasing results in a confusing variable name:
        movieAPlaying*/
        boolean movie_A_playing = true;
        boolean movie_B_playing = false;
        double moneyAvailable = 6.50;
        if (moneyAvailable >= ticketCost && (movie_A_playing || movie_B_playing))
        {
            System.out.println("I'm going to the movies!!!");
        }
        else
        {
        	System.out.println("Staying home is cool too...");
        }

        /*Now let's increase availableMoney so that we can afford a ticket and try again*/
        moneyAvailable = 10.50;
        if (moneyAvailable >= ticketCost && (movie_A_playing || movie_B_playing))
        {
        	System.out.println("I'm going to the movies!!!");
        }
        else
        {
        	System.out.println("Staying home is cool too...");
        }
	}
}
