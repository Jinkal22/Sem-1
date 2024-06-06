#include<stdio.h>
void main (){
	int i,a=0,b=1,c=0,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
}
