#include<iostream>
#include<stdio.h>
#include<math.h>
#define MAX 100
    using namespace std;

float KhoangCach2Diem(float xA, float yA, float xB, float yB){
    float d = sqrt(pow((xB-xA),2)+pow((yB-yA),2));
    return d;
}

void InPutDiem(float array_1[], float array_2[], int &n){
    cout<<"So diem muon nhap :";
    cin>>n;
    while(n<=0){
        cout<<"Nhap lai n:";
        cin>>n;
    }
    for(int i=0;i<n;i++){
        cout<<"diem so "<<i+1<<"\n";
        //cout<<"a["<<i<<"]=";
        cin>>array_1[i];
        cin>>array_2[i];
    }
}

void OutPutDiem(float array_1[], float array_2[], int n){
    cout<<"Xuat cac diem:"<<"\n";
    for(int i=0;i<n;i++){
        cout<<"diem "<<i+1<<":"<<"("<<array_1[i]<<","<<array_2[i]<<")"<<"\n";
    }
}

int main(){
    int n;
    float array_1[MAX], array_2[MAX];
    InPutDiem(array_1,array_2,n);
    OutPutDiem(array_1,array_2,n);
}