#include<stdio.h>
void main (){
	int n,factorial=1,i=1;
	scanf("%d",&n);
	if(n==0){
	printf("factorial is 1");
}
	else if (n>0){
		for(i=1;i<=n;i++){
		factorial=factorial*i;
	}
	printf("%d",factorial);
}
}
