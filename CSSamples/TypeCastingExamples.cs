using System;
using System.Collections.Generic;
using System.Text;

namespace csBookSamples
{
    class TypeCastingExamples
    {
        public void typeCastExample1()
        {
            int[] myArr = new int[5];
            try
            {
                Console.WriteLine(myArr[5]);
            }
            catch (System.IndexOutOfRangeException e)
            {
                Console.WriteLine("You are trying to access an element that does not exist");
            }
        }
        
        public void typeCastExample2()
        {
            string[] myArr = { "1", "two", "3" };
            try
            {
                int temp = Int32.Parse(myArr[1]);
            } catch (System.InvalidCastException e)
            {
                Console.WriteLine("Cannot convert that string into a number");
            }
        }

        public void typeCastExample3()
        {
            string[] myArr = { "1", "two", "3" };
            try
            {
                int temp = Int32.Parse(myArr[1]);

                string temp2 = myArr[4];
            }
            catch (System.InvalidCastException e)
            {
                Console.WriteLine("Cannot convert that string into a number");
            }
            catch (System.IndexOutOfRangeException e)
            {
                Console.WriteLine("You are trying to access an element that does not exist");
            }
        }

        public void typeCastExample4()
        {
            int[] myArr = new int[5];
            try
            {
                Console.WriteLine(myArr[5]);
            }
            catch (System.IndexOutOfRangeException e)
            {
                Console.WriteLine("You are trying to access an element that does not exist");
            }
            finally
            {
                Console.WriteLine("This try-catch block is finished");
            }
        }
    }
}
