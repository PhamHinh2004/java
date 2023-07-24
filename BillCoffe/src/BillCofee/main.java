package BillCofee;

public class main {
	public static void main(String[] args) {
		Bill b = new Bill("Trung Nguyen",2000000,100,20);
		System.out.println(b.check_Bill_More_Than_500000());
		System.out.println(b.tinh_Sum_After_SaleOFF());
	}
}
