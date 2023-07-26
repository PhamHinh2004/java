
public class test {
	public static void main(String[] args) {
		Date d1 = new Date(26, 7, 2023);
		Date d2 = new Date(23, 7, 2023);
		HangPhim hp1 = new HangPhim("Cartoon","America");
		HangPhim hp2 = new HangPhim("Disney","America");
		Flim f1 = new Flim("The Prirate","28/9/1998", hp2, 100, d1);
		Flim f2 = new Flim("Tom And Jerry","10/5/1995", hp1, 200, d2);
		
		System.out.println(f1.comparative_Otherticket(f2));
		System.out.println(f1.return_NameOfHangPhim());;
		System.out.println("Ticker Before Sale :"+f1.getPrice());
		System.out.println("Ticket Price After Sale 10%:"+f1.return_PriceOfFlim_After_SaleX(10));
	}
}
