#include<stdio.h>
void main (){
	int n,factorial=1,i=1;
	scanf("%d",&n);
	if(n==0){
	printf("factorial is 1");
}
	else if (n>0){
	while(i<=n)
	{
		factorial=factorial*i;
		i++;
	}
	printf("%d",factorial);
}
	
}

