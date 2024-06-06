#include<stdio.h>
void main (){
	char ch;
	printf("enter vaule");
	scanf("%c",&ch);
	((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("alphabets"):printf("numbers");
	
}
