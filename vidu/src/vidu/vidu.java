package vidu;

import java.util.Scanner;

public class vidu {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s ;
		System.out.println("Nhap chuoi:");
		s = sc.nextLine();
		// length() => do dai cua chuoi
		System.out.println(s.length());
		int do_dai = s.length();
		// charAt(vi_tri) => get a char at location
		for(int i=0;i<do_dai;i++) {
			System.out.println("Location "+i+" is "+s.charAt(i));
		}
		System.out.println("--------");
		// funtion getchar(start_location, end_location-1, data_array, start_locationSaveofArray)
		char []arrayChar = new char[20];
		s.getChars(2,do_dai, arrayChar, 0);
		for(int i=0;i<arrayChar.length;i++) {
			System.out.println("Location "+i+" is "+arrayChar[i]);
		}
		System.out.println("----------");
		//getBytes funtion have 3 ways , get gia tri cua cac char trong string 
		byte [] arrayBytes = s.getBytes();
		for (byte b : arrayBytes) {
			System.out.println(b);
		}
	}
}
