package comparaTo;

public class Student implements Comparable<Student>{
	private String fulName;
	private double mssv;
	
	public Student(String fulName, double mssv) {
		super();
		this.fulName = fulName;
		this.mssv = mssv;
	}
	
	
	public String getFulName() {
		return fulName;
	}


	public void setFulName(String fulName) {
		this.fulName = fulName;
	}


	public double getMssv() {
		return mssv;
	}


	public void setMssv(double mssv) {
		this.mssv = mssv;
	}
	
	public void printTest() {
		String s = this.fulName.trim();
		if (s.indexOf(" ")>=0) {
			int location = s.lastIndexOf(" ");
			System.out.println(s.substring(location+1));
		}
		else {
			System.out.println(s);
		}
	}
	public String getFirstName() {
		String s = this.fulName.trim();
		if (s.indexOf(" ")>=0) {
			int location = s.lastIndexOf(" ");
			return s.substring(location+1);
		}
		else {
			return s;
		}
	}
	@Override
	public int compareTo(Student o) {
		String nameThis = this.getFirstName();
		String getName = o.getFirstName();
		return nameThis.compareTo(getName);
	}
}
