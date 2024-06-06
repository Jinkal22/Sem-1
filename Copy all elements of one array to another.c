#include<stdio.h>
void main (){
	int i,n,a[n],b[n];
	printf("enter the size of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter an elemrnt into a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		printf("element in b[%d]:%d\n",i,b[i]);
	}
}
