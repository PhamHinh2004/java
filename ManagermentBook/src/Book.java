
public class Book {
	private String book_name;
	private float price;
	private int nam_xuat_ban;
	private Writor w;
	public Book(String book_name, float price, int nam_xuat_ban, Writor w) {
		super();
		this.book_name = book_name;
		this.price = price;
		this.nam_xuat_ban = nam_xuat_ban;
		this.w = w;
	}
	public String getBook_name() {
		return book_name;
	}
	public void setBook_name(String book_name) {
		this.book_name = book_name;
	}
	public float getPrice() {
		return price;
	}
	public void setPrice(float price) {
		this.price = price;
	}
	public int getNam_xuat_ban() {
		return nam_xuat_ban;
	}
	public void setNam_xuat_ban(int nam_xuat_ban) {
		this.nam_xuat_ban = nam_xuat_ban;
	}
	public Writor getW() {
		return w;
	}
	public void setW(Writor w) {
		this.w = w;
	}
	public void Print_1_book() {
		System.out.println("Sach:"+this.book_name);
		System.out.println("Price:"+this.price);
		System.out.println("Xuat ban:"+this.nam_xuat_ban);
		System.out.println("Writor:"+this.w.getName());
		w.to_String();
	}
	public boolean Comparative(Book b1) {
		return this.nam_xuat_ban == b1.nam_xuat_ban;
	}
}
