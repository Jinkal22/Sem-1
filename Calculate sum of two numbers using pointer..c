#include<stdio.h>
void main(){
	int i,j,sum=0,*ptr1,*ptr2;
	printf("enter the vaule");
	scanf("%d %d",&i,&j);
	ptr1=&i;
	ptr=&j;
	sum=*ptr1+*ptr2;
	printf("%d",sum);
}
