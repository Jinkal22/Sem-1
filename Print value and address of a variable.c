#include<stdio.h>
void main(){
	int a[4]={1,4,7,8};
	int *ptr;
	ptr=a;
	printf("%d",ptr);
	ptr=ptr+2;
	printf("\n%d",*ptr);
}
