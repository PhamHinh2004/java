
public class Flim {
	private String flim_name;
	private String born;
	private HangPhim hp;
	private float price;
	private Date d;
	
	public Flim(String flim_name, String born, HangPhim hp, float price, Date d) {
		this.flim_name = flim_name;
		this.born = born;
		this.hp = hp;
		this.price = price;
		this.d = d;
	}
	
	public boolean comparative_Otherticket(Flim f) {
		return this.price < f.price;
	}
	
	public String return_NameOfHangPhim() {
		return hp.getName();
	}
	
	public float return_PriceOfFlim_After_SaleX( float x) {
		return this.price = this.price - (this.price*x/100);
	}

	public String getFlim_name() {
		return flim_name;
	}

	public void setFlim_name(String flim_name) {
		this.flim_name = flim_name;
	}

	public String getBorn() {
		return born;
	}

	public void setBorn(String born) {
		this.born = born;
	}

	public HangPhim getHp() {
		return hp;
	}

	public void setHp(HangPhim hp) {
		this.hp = hp;
	}

	public float getPrice() {
		return price;
	}

	public void setPrice(float price) {
		this.price = price;
	}

	public Date getD() {
		return d;
	}

	public void setD(Date d) {
		this.d = d;
	}
	
}
