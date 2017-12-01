package com.runninmancoding.bookSamples.classes.residences;

public class Residence {
	private int numRooms;

	public int getNumRooms() {
		return numRooms;
	}

	public void setNumRooms(int numRooms) {
		this.numRooms = numRooms;
	}
	
	protected void protectedResidenceMethod(){
		System.out.println("Protected method in Residence");
	}
	
	public void randomMessage(){
		System.out.println("Random message from Residence class");
	}

}
