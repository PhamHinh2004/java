package BillCofee;

import java.util.Objects;

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
	// get and set
	public String getNameOfCoffee() {
		return NameOfCoffee;
	}
	public void setNameOfCoffee(String nameOfCoffee) {
		NameOfCoffee = nameOfCoffee;
	}
	public double getPrice() {
		return Price;
	}
	public void setPrice(double price) {
		Price = price;
	}
	public double getPrice_1_kg() {
		return Price_1_kg;
	}
	public void setPrice_1_kg(double price_1_kg) {
		Price_1_kg = price_1_kg;
	}
	public float getKhoi_luong() {
		return Khoi_luong;
	}
	public void setKhoi_luong(float khoi_luong) {
		Khoi_luong = khoi_luong;
	}
	@Override
	////  return gia tri dai dien class 
	public int hashCode() {
		return Objects.hash(Khoi_luong, NameOfCoffee, Price, Price_1_kg);
	}
	@Override
	///// phuong thuc so sanh 2 class
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Bill other = (Bill) obj;
		return Float.floatToIntBits(Khoi_luong) == Float.floatToIntBits(other.Khoi_luong)
				&& Objects.equals(NameOfCoffee, other.NameOfCoffee)
				&& Double.doubleToLongBits(Price) == Double.doubleToLongBits(other.Price)
				&& Double.doubleToLongBits(Price_1_kg) == Double.doubleToLongBits(other.Price_1_kg);
	}
	
}
