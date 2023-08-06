
public class HinhVuong extends Apperance{
	private int dai, rong;
	public HinhVuong(Toado td, int dai, int rong) {
		super(td);
		this.dai = dai;
		this.rong = rong;
	}
	@Override
	public double tinh_dien_tinh() {
		return this.dai * this.rong;
	}
	
}
