package BillCofee;

public class Bill {
	private String NameOfCoffee;
	private double Price;
	private double Price_1_kg;
	private float Khoi_luong;
	public Bill(String name, double price, double Price_1_kg, float khoi_luong){
		this.NameOfCoffee = name;
		this.Price = price;
		this.Price_1_kg = Price_1_kg;
		this.Khoi_luong = khoi_luong;
	}
	public boolean check_Lai_Khoi_Luong_Da_Ban(double price) {
		return this.Price == price;
	}
	public boolean check_Bill_More_Than_500000() {
		return this.Price > 500000;
	}
	
	public double tinh_Sum_SaleOFF10_When_Bill_More_Than_500000() {
		if(this.check_Bill_More_Than_500000()) {
			return this.Price*10/100;
		}
		return 0;
	}
	public double tinh_Sum_After_SaleOFF() {
		return this.Price - this.tinh_Sum_SaleOFF10_When_Bill_More_Than_500000();
	}
}
