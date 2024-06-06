#include<stdio.h>
void main (){
	char c;
	printf("enter the char c");
	scanf("%c",&c);
	
	if ( c>='A' && c<='Z'){
		printf("char is upper case");
	}
	else
	if ( c>='a' && c<='z'){
		printf("char is lower case");
	}
	else
		if (c>='0' && c<='9'){
		printf("char is digit");
	}
	else {
	printf("char is special digit");
}
}
