package comparaTo;

public class main {
	public static void main(String[] args) {
		Student st = new Student("Pham Van Hinh", 22674201);
		Student st_1 = new Student("Pham Van Binh An", 123123);
		Student st_2 = new Student("An", 123124);
		System.out.println("comperative st anh st_1 : "+st.compareTo(st_1));
		System.out.println("comperative st anh st_2 : "+st.compareTo(st_2));
		st.printTest();
	}
}
