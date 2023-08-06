
public class test {
	public static void main(String[] args) {
		
		HangSanXuat hsx1 = new HangSanXuat("Toyota","Japan");
		HangSanXuat hsx2 = new HangSanXuat("AirBus","Eu");
		HangSanXuat hsx3 = new HangSanXuat("Mini","Viet Nam");
		PhuongTinDiChuyen ptdc_1 = new Plane(hsx2, "Xang");
		PhuongTinDiChuyen ptdc_2 = new Car(hsx1, "Xang");
		PhuongTinDiChuyen ptdc_3 = new bike(hsx3);
		// test methohs
		ptdc_1.van_Toc();
		ptdc_2.van_Toc();
		ptdc_3.van_Toc();
		System.out.println(ptdc_1.loai_phuong_tien);
	}

}
