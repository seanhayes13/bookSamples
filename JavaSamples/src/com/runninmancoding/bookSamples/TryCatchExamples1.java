package com.runninmancoding.bookSamples;

public class TryCatchExamples1 {
	public static void main(String[] args){
		//Simple try-catch block - In this example we are going to
		//make a simple array and try to access an element that is
		//outside its range.
		try{
			//Here we are going to create a simple int array that
			//has a size of 1
			int[] emptyArr = new int[1];
			//Now we are going to try and print the third element
			//in the array we just created. Since we gave it a size
			//of 1, this is going to cause this try block to fail
			//and the code will move to the catch block.
			System.out.println(emptyArr[3]);
		} catch (ArrayIndexOutOfBoundsException e){
			//Here you can print out the actual error which will make
			//no sense to your normal user.
//			System.out.println(e.getMessage());
			//Or you can have the program print out a custom message
			//that you can specifically write so that anyone can
			//understand what went wrong and what to do next
			System.out.println("The element you are trying to access" +
			" does not exist. Please try again with a lower number.");
		}
		
		//Try-catch with multiple catch blocks - As you write more 
		//complex code, you are likely going to run into situations
		//where multiple different actions can go wrong. This is when
		//you will start having multiple catch blocks
		try{
			//Here we are creating an array to hold three strings. Notice
			//that the first and last are actual numbers, while the second
			//is an actual string of letters.
			String[] numWordArr = {"1","two","3"};
			//To demonstrate this catch block, I am going to briefly
			//discuss type-casting, taking one value and converting it
			//into a different type. In the example below, we are going
			//to use the Integer class's parseInt method to convert a
			//string into a number. This example will work since the first
			//element in the array is actually a number.
			int temp = Integer.parseInt(numWordArr[0]);
			//What happens if we try the same with the second element?
			//Without a try-catch block, the program will crash and stop 
			//here. We are going to catch it in a second catch block below
			int temp2 = Integer.parseInt(numWordArr[1]);
			//Try commenting out the line above and uncommenting out the 
			//next line to see how the different catch blocks will work
//			String temp3 = numWordArr[4];
		} catch (ArrayIndexOutOfBoundsException e){
			//First we are going to include a catch to handle the user
			//trying to access something out of bounds
			System.out.println("The element you are trying to access" +
			" does not exist. Please try again with a lower number.");
		} catch (NumberFormatException nfe){
			//Then provide a different message for this scenario
			System.out.println("Cannot convert the provided word into "+
			"a number");
		}
		
		//No matter how many catch blocks you have, once the first is
		//tripped, the entire try-catch block will stop. So if you were
		//to uncomment both examples in the try block above, only the 
		//first will run.
		
		//There is one more piece to the try-catch block: finally. The
		//finally block acts like a net, whether the try block runs
		//successfully or runs into an error and hits the catch block,
		//a finally statement will always run. To show this, I am going
		//to reuse the first example, minus all of the original comments,
		//and add the finally block.
		try{
			int[] emptyArr = new int[1];
			System.out.println(emptyArr[3]);
		} catch (ArrayIndexOutOfBoundsException e){
			System.out.println("The element you are trying to access" +
			" does not exist. Please try again with a lower number.");
		} finally{
			System.out.println("This try-catch block is finished");
		}
		//The finally block is often used when working with files or
		//or database connections so that whether the try block runs 
		//successfully or an error forces the code into the catch block,
		//the lock on the file that prevents other users from accessing it
		//is removed, or the connection to the database is closed.
	}

}
