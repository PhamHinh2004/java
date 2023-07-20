#include<stdio.h>
int a[50];
int n;
void input(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);	
		}
	}
// chuyên dôi vi tri (position switch)
void chuyen_doi(int &x, int &y){
	int temp = x;
		x = y;
		y = temp;
	}
void insertion_sort(int a[], int n ){
	for(int i=1;i<n;i++){
		int j = i;
		while(j>0&&a[j]<=a[j-1]){
			chuyen_doi(a[j],a[j-1]);
			j = j-1;	
			}
		}
	}	
void output(int a[], int n){
	insertion_sort(a,n);
	printf(" xap xep tu be den lon :");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
		}
	}

int main(){
input(a,n);
output(a,n);
return 0;
}

