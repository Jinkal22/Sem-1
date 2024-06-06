#include<stdio.h>
void main (){
	int arr[5],n,i;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("enter element into arr [%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("arr[%d]:%d\n",i,arr[i]);
	}
}
