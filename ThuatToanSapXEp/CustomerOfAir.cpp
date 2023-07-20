// Xây dựng lớp Vemaybay gồm:

// Thuộc tính: tenchuyen, ngaybay, giave
// Phương thức:
// Cấu tử
// Hủy
// Nhap
// Xuat
// getgiave() : hàm trả về giá vé
// Xây dựng lớp Nguoi gồm:

// Thuộc tính: hoten, gioitinh, tuoi
// Phương thức:
// Cấu tử
// Hủy
// Nhập
// Xuất
// Xây dựng lớp Hanhkhach (mỗi hành khách được mua nhiều vé) kế thừa lớp Nguoi bổ
// sung thêm:

// Thuộc tính: Vemaybay *ve; int soluong;
// Phương thức:
// Cấu tử
// Hủy
// Nhập
// Xuất
// tongtien(): trả về Tổng số tiền phải trả của hành khách
// Chương trình chính: Nhập vào 1 danh sách n hành khách (n nhập từ bàn phím).
// Hiển thị danh sách hành khách và số tiền phải trả tương ứng của mỗi khách hàng.
// Sắp xếp danh sách hành khách theo chiều giảm dần của Tổng tiền.


#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include <iomanip>
    using namespace std;
#define max 1000

class Flight
{
protected:
    string FlightName;
    string Date;
    float TicketPrice;
public: 
    Flight(){
        this->TicketPrice = 0;
        this->Date = this->FlightName = "0";
    }
    void InPut_TicketFlight();
    void OutPut_TicketFlight();
    float ReturnPrice(){
        return this->TicketPrice;
    }
    // ~Flight();
    //    // delete[
}; 

void Flight :: InPut_TicketFlight(){
    cout<<"Flightname : ";
    cin.ignore();
    getline(cin,this->FlightName);
    cout<<"Date : ";
    cin.ignore();
    getline(cin,this->Date);
    cout<<"TicketPrice :";
    cin>> this->TicketPrice;
}

void Flight :: OutPut_TicketFlight(){
    cout<<"Flightname : "<< this->FlightName<< endl;
    cout<<"Date : "<<this->Date<<endl;
    cout<<"Ticke Price :"<<this->TicketPrice<<endl;
}

class CustomerOfAir
{
protected:
        string FullName;
        string Sex;
        int Old;
public:
    CustomerOfAir(){
        this->FullName = this->Sex ="0";
        this->Old = 0;
    }
    void IntPut_InformationOfCustomer();
    void OuttPut_InformationOfCustomer();
    // ~CustomerOfAir();
};

void CustomerOfAir :: IntPut_InformationOfCustomer(){
    cout<<"FUllname : ";
    cin.ignore();
    getline(cin,this->FullName);
    cout<<"Sex: ";
    cin.ignore();
    getline(cin,this->Sex);
    cout<<"Old :";
    //cin.ignore();
    cin>> this->Old;
}

void CustomerOfAir :: OuttPut_InformationOfCustomer(){
    cout<<"Fullname : "<< this->FullName<< endl;
    cout<<"Sex : "<<this->Sex<<endl;
    cout<<"Old :"<<this->Old<<endl;
}
// sung thêm:
// Thuộc tính: Vemaybay *ve; int soluong;
// Phương thức:
// Cấu tử
// Hủy
// Nhập
// Xuất
// tongtien(): trả về Tổng số tiền phải trả của hành khách
// Chương trình chính: Nhập vào 1 danh sách n hành khách (n nhập từ bàn phím).
// Hiển thị danh sách hành khách và số tiền phải trả tương ứng của mỗi khách hàng.
// Sắp xếp danh sách hành khách theo chiều giảm dần của Tổng tiền.

class Customer : public CustomerOfAir
{   
    protected:
        int number_of_ticket;
        Flight ticket[max];
        float TotalMoney;
    public:
        Customer(){
            this-> number_of_ticket = 0;
            this->TotalMoney = 0;
            //this->ticket[LimitofList] = 0
            this->ticket;
        }
        void  InPutCustomer();
        void OutPutCustomer();
        friend void Swap(Customer&, Customer&);
        friend void SolutionSort(Customer*, int);
        float ToTal(Customer*, int n);
        //~Customer();
};

void Customer :: InPutCustomer(){
        this->IntPut_InformationOfCustomer();
        cout<<" Buy ticket :";
        this->number_of_ticket;
        while(this->number_of_ticket <= 0){
            cout<<"You might to buy more than 1 ticket ";
            cin>>this->number_of_ticket;
        }
        for(int j=0;j<this->number_of_ticket;j++){
            cout<<"Ticket number "<<j+1<<endl;
            this->ticket[j].InPut_TicketFlight();
        }
}

float Customer :: ToTal(Customer *c,int n){
        for(int i=0;i<c[n].number_of_ticket;i++){
            c[n].TotalMoney+=c[n].ticket[i].ReturnPrice();
        }
    return c[n].TotalMoney;
}

void Swap(Customer &a, Customer &b){
    Customer temp;
    temp = a;
    a = b;
    b = temp;
}

void  SolutionSort(Customer *c,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(c[i].ToTal(c,i) < c[j].ToTal(c,j)){
                Swap(c[i],c[j]);
            }
        }
    }
}

void Customer:: OutPutCustomer(){
    cout<<"Customer list was sortted from 1->end by priceofticket "<<endl;
        this->OuttPut_InformationOfCustomer();
        for(int j=0;j<this->number_of_ticket;j++){
            cout<<"Ticket number "<<j+1<<endl;
            this->ticket[j].OutPut_TicketFlight();
        }
}

int main(){
    int n;
    int People ;
    Customer *c;
    c = new Customer[max];
    cout<<" How many people buy plane ticket ?"<<endl;
    cout<<"Limit Customer : "<<endl;
    cin>> n;
        while(n<=0){
            cout<<"Input again (limit customer more than 1): ";
            cin>>n;
        }
    cout<<"---------------------------------------"<<endl;
    cout<<"---------------Customer----------------"<<endl;
        for(int i=0;i<n;i++){
            cout<<i+1<<"Customer:"<<endl;
            c[i].InPutCustomer();
        }
    cout<<"-------------Customer List-------------"<<endl;
        SolutionSort(c,n);
        for(int i =0;i<n;i++){
            cout<<i+1<<"Customer:"<<endl;
            c[i].OutPutCustomer();
        }
    cout<<"---------------------------------------"<<endl;
}
