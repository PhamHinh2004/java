#include<stdio.h>
int a[50];
int n ;
void input(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);	
		}
	}
void possion_switch(int &x, int &y){
	int temp = x;
		x = y;
		y = temp;
	}
void selection_sort(int a[], int n){
	for(int i=0;i<n-1;i++){
		int min = a[i];
		printf("min:%d\n");
//		int i_min = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<min){
				min = a[j];
			//	i_min = j;
			}
		}
		printf("%d\n",min);
		possion_switch(a[i],min);
	}
}	
void output(int a[], int n){
	selection_sort(a,n);
	printf(" sap xep tu be den lon: ");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
		}
	}
int main(){
	input(a,n);
	output(a,n);
return 0;
}

