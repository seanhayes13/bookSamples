import java.util.ArrayList;

public class ContainerSamples {
	public static void main(String[] args){
		int[] intArray = new int[30];
		intArray[5] = 42;
		System.out.println(intArray[5]);
		int[] intArray2 = intArray.clone();
		intArray2[5] = 23;
		int[] intArray3 = intArray;
		System.out.println("intArray[5]:" + intArray[5]);
		System.out.println("intArray2[5]:" + intArray2[5]);
		System.out.println("intArray3[5]:" + intArray3[5]);
		
		intArray[5] = 2;
		System.out.println("intArray3[5]:" + intArray3[5]);
		int test = 42;
		int another = test;
		System.out.println(another);
		test = 23;
		System.out.println(another);
		
		//Both of thelines below will create an ArrayList to hold
		//int values, with newer versions of Java, we can declare
		//it once like we do in the first list. We need to use
		//Integer, which is the higher level package that contains
		//the int type. The same holds if we were using double, we
		//would need to use Double.
		ArrayList<Integer> intList = new ArrayList<>();
		intList.add(42);
		intList.add(23);
		intList.add(26);
		ArrayList<Integer> intList2 = intList;
		System.out.println(intList);
		System.out.println(intList2);
		intList.set(0, 13);
		System.out.println(intList2);
	}

}
