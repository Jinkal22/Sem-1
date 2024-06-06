#include<stdio.h>
void main (){
	char s1[100],key;
	gets(s1);
	scanf("%c",&key);
	int i;
	for(i=0;i<100;i++){
		if(s1[i]==key){
			printf("Index=%d",i);
			return;
		}
	}
	printf("not found");
}
