package com.runninmancoding.bookSamples;

public class IfElseExamples {
	public static void main(String[] args){
		//Let's set a variable to run some tests on
		int a = 42;
		//First test is to see if a is equal to 42, which it is
		if(a == 42){
			System.out.println("a is equal to 42");
		}
		
		//Now we test with a number that we know is not correct
		if(a == 23){
			//This line should not print
			System.out.println("a is equal to 23");
		}
		
		/*
		 * In the second example we see a need for the other
		 * half of this set of examples: the else clause. This will
		 * run if the if statement is false. Let's rework the second
		 * example
		 */
		if(a == 23){
			//This line should not print
			System.out.println("a is equal to 23");
		} else {
			//This line should print
			System.out.println("a is not equal to 23");
		}
		
		/* You can add in else if statements that allow you to check 
		 * other criteria. You can add as many else if statements as
		 * you need for the program, just know that the whole statement
		 * will end and move to the next line as soon as it finds a
		 * true statement. Let's try working with days. Without getting
		 * into any of the date classes and methods, we will hard code a
		 * value to represent what day today is.
		 */
		String today = "Wednesday";
		if(today.equals("Sunday")){
			//print a message
		}else if(today.equalsIgnoreCase("Monday")){
			//print a message
		}else if(today.equalsIgnoreCase("Tuesday")){
			//print a message
		}else if(today.equalsIgnoreCase("Wednesday")){
			//print a message
		}else if(today.equalsIgnoreCase("Thursday")){
			//print a message
		}else if(today.equalsIgnoreCase("Friday")){
			//print a message
		}else if(today.equalsIgnoreCase("Saturday")){
			//print a message
		}
		/*
		 * No need to write an else if to see if a is less than 50, since
		 * we have run through all three of the options.
		 */
	}
}
