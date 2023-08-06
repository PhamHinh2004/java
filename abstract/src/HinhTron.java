
public class HinhTron extends Apperance{
	private int bankinh;
	public HinhTron(Toado td, int bankinh) {
		super(td);
		this.bankinh = bankinh;
	}
	@Override
	public double  tinh_dien_tinh() {
		return Math.PI*bankinh*bankinh;
	}
}
