#include<stdio.h>
void main (){
	int arr[10],cp=0,cn=0,i,n;
	printf("enter the vaule: ");
	scanf("%d",&n);
	arr[n];
	for(i=0;i<n;i++){
		printf("enter the vaule into arr[%d]: ");
		scanf("%d",&arr[i]);
	if(arr[i]>0){
		cp++;
	}
	else{
		cn++;
	}
}
	printf("positive:%d and negative:%d",cp,cn);
}
