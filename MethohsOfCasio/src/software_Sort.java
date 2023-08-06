
public class software_Sort implements MayTinhBoTuiInterface, Sort_Interface{

	@Override
	public void Tang(double[] arr) {
		int n = arr.length;
		double key;
		int i, j;
		for (i = 1; i < n; i++) {
			key = arr[i];
			j = i - 1;

			while (j >= 0 && arr[j] < key) {
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = key;
		}
	}

	@Override
	public void Giam(double[] arr) {
		for(int i = 0; i<(arr.length-1);i++) {
			for(int j = i+1;j<arr.length;j++) {
				if(arr[j]<arr[i]) {
					double temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		
	}

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
