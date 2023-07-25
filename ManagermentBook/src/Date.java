
public class Date {
	private int day;
	private int month;
	private int year;
	public Date(int day, int month , int year) {
		this.day = day;
		this.month = month;
		this.year = year;
	}
	public int getDay() {
		return day;
	}
	public void setDay(int day) {
		if(day>=32||day<=0)
		{
			this.day = 1;
		}
		else {
			this.day = day;
		}
	}
	public int getMonth() {
		return month;
	}
	public void setMonth(int month) {
		if(month >= 13 || month <= 0 ) {
			this.month = 1;
		}
		else {
			this.month = month;
		}
	}
	public int getYear() {
		return year;
	}
	public void setYear(int year) {
		if (year == 0) {
			this.year = 1;
		}
		else {
			this.year = year;
		}
	}
}
