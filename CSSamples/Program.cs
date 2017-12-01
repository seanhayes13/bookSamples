using csBookSamples.Residences;
using System.Collections.Generic;
using System;

namespace csBookSamples
{
    class Program
    {
        static void Main(string[] args)
        {
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
            Console.WriteLine("############\nSection 1 - Hello World\n############");
            Console.WriteLine("Hello World");

            /*Section 2 - Datatypes and Assignment*/
            Console.WriteLine("\n\n############\nSection 2 - Datatypes and Assignment\n############");
            char sampleChar = 's';
            Console.WriteLine(sampleChar);
            int sampleInt = 42;
            Console.WriteLine(sampleInt);
            double sampleDouble = 3.14;
            Console.WriteLine(sampleDouble);
            bool sampleBool = true;
            /*Printing out a bool will print out 1 if true, 0 if false.*/
            Console.WriteLine(sampleBool);

            ///*Section 3 - Arrays*/
            Console.WriteLine("\n\n############\nSection 3 - Containers\n############");
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
            Console.WriteLine("primes[3] - " + primes[3]);

            /*Another way to create and populate an array at the same time*/
            int[] evens = { 2, 4, 6, 8, 10 };
            Console.WriteLine("evens[2] - " + evens[2]);

            /*Nested or multi-dimensional arrays are arrays within arrays.
            //In this example we will create a nested array to hold the day
            //time highs for each day of each month. The first array will 
            //represent the months, the second will represent the days.*/
            int[,] highs = new int[12,31];
            /*So if we wanted to store the high for January 1st, remember
	        that we need to use 0 index for both, it would look like this.*/
            highs[0,0] = 23;
            //Febrary 14th...
            highs[1,13] = 34;

            int[,] squares = { {1, 2, 3},{1, 4, 9} };

            //Lists
            List<double> grades = new List<double>();
            grades.Add(98.5);
            grades.Add(92.3);
            Console.WriteLine("grades at 0: "+grades[0]);
            grades.Add(403);
            Console.WriteLine("grades size: " + grades.Count);
            grades.RemoveAt(2);
            Console.WriteLine("grades size: " + grades.Count);

            /*Section 4 - Strings*/

            /*Section 5 - Typecasting*/

            /*Section 6 - Operators*/

            /*Section 7 - Complex Containers*/
            Console.WriteLine("\n\n############\nSection 7 - Complex Containers\n############");
            Dictionary<string, string> d = new Dictionary<string, string>();
            d.Add("firstName", "Jon");
            d.Add("lastName", "Snow");
            foreach (KeyValuePair<string, string> item in d)
            {
                Console.WriteLine(item.Key + ": " + item.Value);
            }

            /*Section 8 - Control Statements*/


            //Inheritance
            //Residence r = new Residence();
            //House h = new House();
            //h.sampleMethod();
            //r.message();
            //h.message();

        }
    }
}