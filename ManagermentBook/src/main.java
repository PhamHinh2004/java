
public class main {
	public static void main(String[] args) {
		Date d1 = new Date(20, 10, 2004);
		Date d2 = new Date(21, 15, 1998);
		Writor w1 = new Writor("Pham Van Hinh", d1);
		Writor w2 = new Writor("Truong Van Thanh", d2);
		Book b1  = new Book("Truong Nhat Ky", 250, 2000, w1);
		Book b2  = new Book("De men", 200, 1995, w2);
		b1.Print_1_book();
		System.out.println(b1.Comparative(b1));
		//System.out.println();
	}
}
