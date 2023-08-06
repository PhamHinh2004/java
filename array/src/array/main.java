package array;

import java.util.Arrays;

public class main {
	public static void main(String[] args) {
		// kieu nguyen thuy 
		double [] array = {100,50,3};
		// toan tu gan 
		double [] array_1 = array;
		array_1[0] = 0;
		System.out.println("array = "+Arrays.toString(array));
		System.out.println("array_1= "+Arrays.toString(array_1));
		// systerm.arraycopy
		double [] array_2 = new double[array.length];
		System.arraycopy(array, 0, array_2, 0,array.length);
		array_2[0] = 1;
		System.out.println("array= "+Arrays.toString(array));
		System.out.println("array_2= "+Arrays.toString(array_2));
		// Clone()
		double [] array_3 = array.clone();
		array_3[0] = 2;
		System.out.println("array= "+Arrays.toString(array));
		System.out.println("array_3= "+Arrays.toString(array_3));
		
		
		
	}
}
