#include<stdio.h>
void main (){
	int a,b,choice,c;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	
	printf("1.addition/n,2.subtraction/n,3.multiplicaton/n,4.division/n");
	scanf("%d",&choice);
	
if (choice==1){
	printf("result %d", a+b);
}
else
if (choice==2){
	printf("result %d",a-b);
}
else
if (choice==3){
	printf("result %d",a*b);
}
else
if (choice==4){
	printf("result %d",a/b);
}
}
