
public class test {
	public static void main(String[] args) {
		Toado d1 = new Toado(1,1);
		Toado d2 = new Toado(6,1);
		HinhTron ht = new HinhTron(d2, 2);
		Apperance ap1 = new HinhTron(d1, 3);
		Apperance ap2 = new HinhVuong(d2,3,4);
		System.out.println(ap1.tinh_dien_tinh());
		System.out.println(ap2.tinh_dien_tinh());
		System.out.println(ht.tinh_dien_tinh());
	}
}
