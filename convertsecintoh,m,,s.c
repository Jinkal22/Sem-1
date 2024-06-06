#include<stdio.h>
int main(){
	
	int S,H,M;
	
	printf("enter an int");
	scanf("%d",&S);
	
	H=S/3600;
	S=S%3600;
	
	M=S/60;
	S=S%60;
	
	printf("%d : %d,%d",H,M,S);
	
	return 0;
}
	
	
	

