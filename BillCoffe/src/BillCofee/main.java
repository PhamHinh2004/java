package BillCofee;

public class main {
	public static void main(String[] args) {
		Bill b = new Bill("Trung Nguyen",2000000,100,20);
		Bill b1 = new Bill("Dak Lak",2000000,100,20);
		Bill b2 = new Bill("Trung Nguyen",2000000,100,20);
//		System.out.println(b.check_Bill_More_Than_500000());
//		System.out.println(b.tinh_Sum_After_SaleOFF());
		System.out.println("gia tri dai dien b:"+b.hashCode());
		System.out.println("gia tri dai dien b1:"+b1.hashCode());
		System.out.println("gia tri dai dien b2:"+b2.hashCode());
	}
}
