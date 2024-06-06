#include<stdio.h>
int main (){
	
	int Y,W,D;
	
	printf("enter an int");
	scanf("%d",&D);
	
	Y=D/365;
	D=D%365;
	
	W=D/7;
	D=D%7;
	
	printf("%d :%d,%d",Y,W,D);
	
	return 0;
}
