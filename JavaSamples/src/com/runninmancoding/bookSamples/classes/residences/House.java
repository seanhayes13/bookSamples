package com.runninmancoding.bookSamples.classes.residences;

public class House extends Residence{
	
	public void sampleMethod(){
		System.out.println("Public method in House class");
		this.protectedResidenceMethod();
	}

	@Override
	public void randomMessage(){
		System.out.println("Random message from House class");
	}
}
