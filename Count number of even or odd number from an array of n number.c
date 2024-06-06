#include<stdio.h>
void main (){
	int n,i,co=0,ce=0;
	printf("enter the vaule: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the vaule into arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			ce++;
		}
		else{
			co++;
		}
		
	}
	printf("count of even:%d",ce);
	printf("count of odd:%d",co);
	
}
