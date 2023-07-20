#include<stdio.h>
int linearSearch(int a[], int n){
	int i = 0;
	int	k = 5;
	a[n] = k;
	while(a[i]!=k){
		i = i+1;
	}
	if(i<n){
		return i;
	}
	else{
		return -i;
	}
}
void InPut(int a[], int &n){
	printf("n:");
		scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
			scanf("%d",&a[i]);
	}
}
int main(){
	int a[50];
	int n;
	InPut(a,n);
	printf("%d",linearSearch(a,n));


return 0;
}

