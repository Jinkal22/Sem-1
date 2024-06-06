#include<stdio.h>
void main (){
	int a,b,c,max;
	printf("enter the three numbers :");
	scanf("%d %d %d",&a,&b,&c);
	max = a>b?1:2;
	switch(max){
		case 1:
			printf("%d",a*c);
			break;
		case 2:
			printf("%d",b*c);
			break;
		default:
		printf("invalid ");
				
				
	}
}
