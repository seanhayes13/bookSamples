package com.runninmancoding.bookSamples;

public class ForLoopExamples {
	public static void main(String[] args){
		/*
		 * The basic for loop can be used to count from one
		 * number up to another or down. To make a for loop
		 * you need to declare where to start, what conditions
		 * to check to keep running, and how to change with
		 * each iteration. In the example below we will start
		 * at 0, go as long as i is less than 10, and change
		 * by 1 each time.
		 */
		for(int i = 0; i < 10; i++){
			System.out.println(i);
			//print a message to the screen
		}
		/*
		 * Make sure to pay attention to the condition, if 
		 * you flip to i > 10, the loop will never run
		 */
		/*
		 * To count down, make sure to adjust the condition
		 * and how it will change.
		 */
		for(int i = 10; i > 0; i--){
			System.out.println(i);
		}		
		
		//For this section, we are going to work with an array of strings
		String[] animals = {"armadillo","bear","cat","dog","elephant","fox","gorilla"};
		/*
		 * Java is one of the languages that has an enhanced
		 * for loop known as a for each loop. Using the string
		 * array above we will use a for each loop to go through
		 * each string in the array
		 */
		for(String animal : animals){
			System.out.println(animal);
		}
	}
}
