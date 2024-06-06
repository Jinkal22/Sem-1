#include<stdio.h>
void main (){
	float i,j,n,f=1,e=1,sum=0;
	printf("enter a vaule: ");
	scanf("%f",&n);
	for(i=1;i<=n;i++){
		f=f*i;
		sum=sum+(1/f);
	}
	printf("%f",sum+e);
}
