package firstproject;

import java.util.Scanner;

public class hinh {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		float ketqua ;
		float delta;
//		System.out.println(" a = ");
//		int a = sc.nextInt();
//		System.out.println(" b = ");
//		int b = sc.nextInt();
////		System.out.println(a + "==" + b + ":" +(a==b));
//		System.out.println("ceil (a) = "+ Math.ceil(a));
//		System.out.println("Max ( a, b) = " + Math.max(a, b));
		// phuong trinh bac 2 ax2 + bx + c = 0 
		System.out.println("phuong trinh bac hai : ax2 + bx + c");
		float  a = sc.nextFloat();
		float b = sc.nextFloat();
		float c = sc.nextFloat();
		System.out.println("phuong trinh bac hai la: " + a+"X^2"+b+"x"+c);
		if(a==0) {
			if(b==0) {
				if(c!=0) {
					System.out.println("Phuong trinh vo nghiem");
				}
				else {
					System.out.println("Phuong trinh co vo nghiem");
				}
			}
			else {
				ketqua = -c/b;
				System.out.println("ket qua la " + ketqua);
			}
		}
		else {
			delta = b*b - 4*a*c;
			if(delta < 0) {
				System.out.println("phuong trinh vo nghiem");
			}
			else if (delta == 0) {
				ketqua = -b/2*a;
				System.out.println("ket qua nghiem kep : "+ ketqua);
			}
			else {
				float x1 = (float)(-b + Math.sqrt(delta)) / 2*a ;
				float x2 = (float)(-b - Math.sqrt(delta)) / 2*a ;
				System.out.println("x1 = " + x1);
				System.out.println("x2 = " + x2);
			}
		}
	}
}

