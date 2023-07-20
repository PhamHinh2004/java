#include<stdio.h>
int a[50] , n;
void input(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		}
	}
void possion_witch(int &x, int &y){
	int temp = x;
		x = y;
		y =temp;
	}
void test(int a[], int n){
int j;
	for(int i=0;i<n-1;i++){
		j = i;
	while(j > -1 && a[j]>a[j+1]){
		possion_witch(a[j],a[j+1]);
		j = j-1;
		}
	}
}
void output(int a[], int n){
test(a,n);
printf("sap xep tu be den lon\n");
for(int i=0;i<n;i++){
	printf("%d\t",a[i]);
	}
}
int main(){
input(a,n);
output(a,n);
return 0;
}

