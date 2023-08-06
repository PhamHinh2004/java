
public class Selection_sort implements Sort_Interface{

	@Override
	public void Tang(double[] arr) {
		for(int i = 0; i<(arr.length-1);i++) {
			for(int j = i+1;j<arr.length;j++) {
				if(arr[j]>arr[i]) {
					double temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
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
	
}
