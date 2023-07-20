#include<stdio.h>
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i <n;i++){
		printf(" a[%d] :",i);
		scanf("%d",&a[i]);
}
	}
void hoan_vi(int &x , int &y){
int temp = x; // hoán vi doi cho so hang voi nhau
	x = y;
	y = temp;		
	}
void slove(int a[],int n){
	nhap_mang(a,n);
		printf(" sap xep tu be den lon ");
	for(int i = 0 ; i<n-1;i++){
		for(int x =i+1; x<n;x++){
			if(a[i] > a[x]){
				hoan_vi(a[i],a[x]);			
			}
		}
	}
}
void ouput(int a[], int n){
	slove(a,n);
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
		}
	}
int main(){
	int  n;
	int a[50];
	scanf("%d",&n);
	printf("      nhap mang:       \n");
//nhap_mang(a,n)	;
ouput(a,n);
return 0;
}

