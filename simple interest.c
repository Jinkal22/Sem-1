#include<stdio.h>
int main(){
	
	int p,r,n,si;
	
	printf("enter a value of p");
	scanf("%d",&p);
	
	printf("enter a value of r");
	scanf("%d",&r);
	
	printf("enter a value of n");
	scanf("%d",&n);
	
	si = p*r*n / 100;
	printf("interest is %d",si);
	
	return 0;
}	
