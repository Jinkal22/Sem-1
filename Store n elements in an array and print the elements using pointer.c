#include<stdio.h>
int main (){
	int n,i;
printf("enter the number of elements");
scanf("%d",&n);
int arr[n];
int *ptr;
printf("enter the elements:\n");
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
}	
ptr=arr;
printf("elemets in the array are:");
for(i=0;i<n;i++){
	printf("%d",*(ptr+i));
}
}
