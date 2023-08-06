
public class Car extends PhuongTinDiChuyen{
	private String loai_Nhien_Lieu;
	public Car( HangSanXuat hsx, String loai_Nhien_Lieu) {
		super("Car", hsx);
		this.loai_Nhien_Lieu = loai_Nhien_Lieu;
	}
	public String getLoai_Nhien_Lieu() {
		return loai_Nhien_Lieu;
	}
	public void setLoai_Nhien_Lieu(String loai_Nhien_Lieu) {
		this.loai_Nhien_Lieu = loai_Nhien_Lieu;
	}
	@Override
	public void van_Toc() {
		System.out.println("50km/h");
	}
}
