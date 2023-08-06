
public class test {
		public static void main(String[] args) {
			software_Sort ss = new software_Sort();
			Insertion_Sort is = new Insertion_Sort();
			Selection_sort ses = new Selection_sort();
			double[] arr_1 = new double[] {29,3,5,1,0};
			double[] arr_2 = new double[] {11,4,2,9,23};
			
			ss.Tang(arr_1);
			for(int i=0;i<arr_1.length;i++) {
				System.out.print(arr_1[i]+" ");
			}
			System.out.println();
			System.out.println("--------");
			ss.Giam(arr_2);
			for(int i=0;i<arr_2.length;i++) {
				System.out.print(arr_2[i]+" ");
			}
	}
}
