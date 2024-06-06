#include<stdio.h>
void main (){
int ld,fd,n,sum=0;
scanf("%d",&n);
ld=n%10;
while(n>=10){
	n=n/10;
}	
fd=n;
sum=fd+ld;
printf("%d",sum);
}
