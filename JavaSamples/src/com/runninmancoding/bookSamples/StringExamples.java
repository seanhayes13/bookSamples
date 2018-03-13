package com.runninmancoding.bookSamples;

public class StringExamples {
	public static void main(String[] args){
		String testString = "the quick brown fox jumped over the lazy dog";
		String[] words = testString.split(" ");
		System.out.println(words[0]);
		System.out.println(words[words.length-1]);
		
		String testString2 = String.join(" ", testString);
		System.out.println("testString2: " + testString2);
		
		System.out.println("testString as all upper case: " + testString.toUpperCase());
		String allUpperStart = "LOL";
		System.out.println("allUpperStart as lower case: " + allUpperStart.toLowerCase());
	}

}
