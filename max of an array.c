#include<stdio.h>
void main (){
	int n,i,max,min;
	printf("enter size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter an element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("%d",max);
	
	min=arr[0];
	for(i=0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
		printf("%d",min);
	}
	
}
