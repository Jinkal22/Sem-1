#include<stdio.h>
void print(int a[],int n);
void main(){
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	print(a,n);
}
void print(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
}
