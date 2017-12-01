package com.runninmancoding.bookSamples.classes;

import com.runninmancoding.bookSamples.classes.residences.House;
import com.runninmancoding.bookSamples.classes.residences.Residence;

public class Main {
	public static void main(String[] args){
		//Create an instance of both Residence and House
		Residence residence = new Residence();
		House house = new House();
		//Call the sampleMethod from House to show that we
		//can access the protected method from Residence
//		residence.protectedResidenceMethod();
		house.sampleMethod();
		//Call the randomMessage from both to show that we
		//did successfully override the method
		residence.randomMessage();
		house.randomMessage();
	}
}
