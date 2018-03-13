package com.runninmancoding.bookSamples;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class IOSamples {
	public static void main(String[] args){
		String text = "";
		System.out.print(">>>");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try {
			text = br.readLine();
		} catch (IOException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
		System.out.println("You typed in: " + text);
	}
}
