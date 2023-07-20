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
	
void bubbleSort(int a[],int n){
	nhap_mang(a,n);
		printf(" sap xep tu be den lon ");
	for(int i = 0 ; i<n-1;i++){
		for(int x = 0; x<n-1;x++){    (n = 5);
			if(a[x] > a[x+1]){ 
				hoan_vi(a[x],a[x+1]);			
			}
		}
	}
}

// 7 9 6 4 3 5  (n = 6)    1.7 6 4 3 5 9   2.6 4 3 5 7   3.4 3 5 6 7   4.3 4 5 6 7 
// 0 1 2 3 
// 4 6 8 2    n = 4 
// i =  0
// x = 0 (x < 3) 4 6 8 2
// x = 1 (x < 3) 4 6 8 2
// x = 2 (x < 3) 4 6 2 8      4 2 6 8    2 4 6 8  
// i = 1
// 

void ouput(int a[], int n){
	bubbleSort(a,n);
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
	
int main(){
	int  n;
	int a[50];
	scanf("%d",&n);
	printf("nhap mang:\n");
	//nhap_mang(a,n)	;
	ouput(a,n);
return 0;
}
