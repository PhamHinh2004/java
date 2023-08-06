
public class Plane extends PhuongTinDiChuyen{
	private String loai_Nhien_lieu ;
	public Plane( HangSanXuat hsx, String loai_Nhien_lieu) {
		super("Plane", hsx);
		this.loai_Nhien_lieu = loai_Nhien_lieu;
	}
	@Override
	public void van_Toc() {
		System.out.println("100km/h");	
	}
	public void cat_Canh() {
		System.out.println("cat canh");
	}
	public void ha_Canh() {
		System.out.println("ha canh");
	}
}
