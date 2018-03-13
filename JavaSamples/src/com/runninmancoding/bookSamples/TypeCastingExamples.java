package com.runninmancoding.bookSamples;

public class TypeCastingExamples {
	public static void main(String[] args){
		int a = 3;
		a += 1.1;
		//This will print out that a is equal to 4. Not 4.1 since
		//a is built to be an int, storing only whole value numbers
		System.out.println("a: " + a);
		//Reset a to equal 3
		a = 3;
		//Cast a as a double and assign to the variable b
		double b = (double)a;
		//Now be is equal to 3.0
		//Add 1.1
		b += 1.1;
		System.out.println("b: " + b);
		
		double d = 3.6;
		int e = (int)d;
		System.out.println("e: "+e);
		
		//In Java, the Integer class (which int is part of) has a method
		//called parseInt which can take a string variable and convert
		//to an int. Next we will create a string, give it the value of
		//the number 5, and use the parseInt method to convert that
		//string into an int.
		String testString = String.valueOf(5);
		int f = Integer.parseInt(testString);
		System.out.println(f);
		
		//The code above will work, but what if testString was set to
		//equal the word five? If you were to uncomment the code below
		//you would receive an error warning saying that there is a
		//NumberFormatException, basically, the program cannot find a
		//number in the word five.

//		String testString2 = "five";
//		f = Integer.parseInt(testString2);
		
		//To fix this, parseInt should always be wrapped in what is 
		//known as a try-catch block.
	}
}
