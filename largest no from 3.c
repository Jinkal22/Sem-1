#include<stdio.h>
void main (){
	int a,b,c;
	printf("enter the value of a");
	scanf("%d",&a);
	
	printf("enter the value of b");
	scanf("%d",&b);
	
	printf("enter the value of c");
	scanf("%d",&c);
	
	if (a>c && a>b){
		printf("a is largest");
	}
	else{
		if (b>c)
	printf("b is largest");		
		
		
	else 
		printf("c is largest");
	}
	
}
