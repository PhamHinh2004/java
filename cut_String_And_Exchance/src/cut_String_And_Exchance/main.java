package cut_String_And_Exchance;

public class main {
	public static void main(String[] args) {
		String s1 =  "Xin chao ";
		String s2 = "moi nguoi";
		// concat(__) funtion = > noi chuoi == s3 = s1 + s2;
			String s3 = s1.concat(s2);
			System.out.println("s3= "+s3);
		// replaceAll fintion ==> exchance String 
			String s4 = s3.replaceAll(s2,"cac bac");
			System.out.println("s4= "+s4);
		// toLowerCase => exchance String thanh chu thuong
			String s5 = s1.toLowerCase();
			System.out.println("s5= "+s5);
		// toUpperCase => exchance String thanh chu hoa
			String s6 = s2.toUpperCase();
			System.out.println("s6= "+s6);
		// trim => Xoa khoang trang du thua o dau chuoi
		// sunString => cat chuoi con
			String s7 = s3.substring(2,7);
			System.out.println("s7= "+s7);
	}
}
