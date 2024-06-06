#include<stdio.h>
void main () {
	int a,b,c,d,root1,root2,realpart,imaginory;
	printf("enter the number : ");
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	if (d>0){
		root1=((-b+sqrt(d))/(2*a));
		root2=((b+sqrt(d))/(2*a));
		printf("distinct roots",root1,root2);
	}
	else if (d=0){
		root1=root2=-b/(2*a);
		printf("real roots",root1,root2);
		
	}
	else {
		realpart=-b/(2*a);
		imaginory=sqrt(-d)/(2*a);
		printf("imaginory roots",realpart);
	}
	
}
