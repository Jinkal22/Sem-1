#include<stdio.h>
void main (){
	char ch;
	int a,b;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	printf("enter ch");
	scanf(" %c",&ch);
	switch (ch)
	{
	case '+':
		printf("addition is %d",a+b);
		break;
	case '-':
	    printf("subtraction");
	    break;
	case '*':
		printf("multiplication");
		break;
	case :
		printf("division");
		break;
	default:
		printf("invalide ch");	
			
	}
}
