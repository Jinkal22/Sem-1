#include<stdio.h>
void main (){
	int n,i=2,count=0;
	scanf("%d",&n);
	while(i<=n)
{
	if(n%i==0){
		count++;
	}
	i++;
}
if(count==2){

printf("primenumber");
}
else{
	printf("notprime");
}
	
}
