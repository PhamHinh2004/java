
public class MayTinhCasioMFX500 implements MayTinhBoTuiInterface{
	@Override
	public double Sum(double a, double b) {
		return a+b;
		
	}

	@Override
	public double Tru(double a, double b) {
		return a-b;
		
	}

	@Override
	public double Nhan(double a, double b) {
		return a*b;
		
	}

	@Override
	public double Chia(double a, double b) {
		return a/b;
	}
	
}
