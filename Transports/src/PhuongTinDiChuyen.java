
public abstract class PhuongTinDiChuyen {
	protected String loai_phuong_tien;
	HangSanXuat hsx;
	
	public String getLoai_phuong_tien() {
		return loai_phuong_tien;
	}

	public void setLoai_phuong_tien(String loai_phuong_tien) {
		this.loai_phuong_tien = loai_phuong_tien;
	}

	public HangSanXuat getHsx() {
		return hsx;
	}

	public void setHsx(HangSanXuat hsx) {
		this.hsx = hsx;
	}

	public PhuongTinDiChuyen(String loai_phuong_tien, HangSanXuat hsx) {
		this.loai_phuong_tien = loai_phuong_tien;
		this.hsx = hsx;
	}
	// methohs
	public String get_Tan_Hang_San_Xuat() {
		return hsx.getTen_hang_san_xuat();
	}
	public void Start() {
		System.out.println("Let's go");
	}
	public void Faster() {
		System.out.println("Faster!");
	}
	public void shut_Down() {
		System.out.println("Shut_down");
	}
	public abstract void van_Toc() ;
}
