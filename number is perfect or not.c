#include<stdio.h>
void main (){
	int n,sum,i=1;
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		printf("n is perfecr");
	}
	else{
		printf("not perfect");
	}
}
