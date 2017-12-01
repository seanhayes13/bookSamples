package com.runninmancoding.bookSamples;

import java.util.ArrayList;

public class BookSamples {
	public static void main(String[] args){
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
		System.out.println("############\nSection 1 - Hello World\n############");
        System.out.println("Hello World");

        /*Section 2 - Datatypes and Assignment*/
        System.out.println("\n\n############\nSection 2 - Datatypes and Assignment\n############");
        char sampleChar = 's';
        System.out.println(sampleChar);
        int sampleInt = 42;
        System.out.println(sampleInt);
        double sampleDouble = 3.14;
        System.out.println(sampleDouble);
        boolean sampleBool = true;
        /*Printing out a bool will print out 1 if true, 0 if false.*/
        System.out.println(sampleBool);

        ///*Section 3 - Arrays*/
        System.out.println("\n\n############\nSection 3 - Containers\n############");
        /*We start by defining the datatype the array will hold, the name
        of the array, and the size.*/
        int[] primes = new int[5];

        ///*Now we will add in some data, this is one way, best
        //used with small arrays.*/
        primes[0] = 2;
        primes[1] = 3;
        primes[2] = 5;
        primes[3] = 7;
        primes[4] = 11;
        System.out.println("primes[3] - " + primes[3]);

        /*Another way to create and populate an array at the same time*/
        int[] evens = { 2, 4, 6, 8, 10 };
        System.out.println("evens[2] - " + evens[2]);

        /*Nested or multi-dimensional arrays are arrays within arrays.
        //In this example we will create a nested array to hold the day
        //time highs for each day of each month. The first array will 
        //represent the months, the second will represent the days.*/
        int[][] highs = new int[12][31];
        /*So if we wanted to store the high for January 1st, remember
        that we need to use 0 index for both, it would look like this.*/
        highs[0][0] = 23;
        //Febrary 14th...
        highs[1][13] = 34;

        int[][] squares = { {1, 2, 3},{1, 4, 9} };

        //Lists
        ArrayList<Double> grades = new ArrayList<Double>();
        grades.add(98.5);
        grades.add(92.3);
        System.out.println("grades at 0: "+grades.get(0));
        grades.add(403.5);
        System.out.println("grades size: " + grades.size());
        grades.remove(2);
        System.out.println("grades size: " + grades.size());

        /*Section 4 - Strings*/

        /*Section 5 - Typecasting*/

        /*Section 6 - Operators*/

        /*Section 7 - Complex Containers*/
//        Console.WriteLine("\n\n############\nSection 7 - Complex Containers\n############");
//        Dictionary<string, string> d = new Dictionary<string, string>();
//        d.Add("firstName", "Jon");
//        d.Add("lastName", "Snow");
//        foreach (KeyValuePair<string, string> item : d)
//        {
//            Console.WriteLine(item.Key + ": " + item.Value);
//        }

        /*Section 8 - Control Statements*/


        //Inheritance
//		//Create an instance of both Residence and House
//		Residence residence = new Residence();
//		House house = new House();
//		//Call the sampleMethod from House to show that we
//		//can access the protected method from Residence
//		residence.protectedResidenceMethod();
//		house.sampleMethod();
//		//Call the randomMessage from both to show that we
//		//did successfully override the method
//		residence.randomMessage();
//		house.randomMessage();
	}
}
