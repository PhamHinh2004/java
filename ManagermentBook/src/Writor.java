
public class Writor {
	private String Name;
	private Date d;
	public Writor(String name, Date d) {
		Name = name;
		this.d = d;
	}
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public Date getD() {
		return d;
	}
	public void setD(Date d) {
		this.d = d;
	}
	public void to_String() {
		System.out.println("Date"+d.getDay()+"/"+d.getMonth()+"/"+d.getYear());
	}
}
