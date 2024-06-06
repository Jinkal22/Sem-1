#include<stdio.h>
void main (){
	int n,i=2,flag=0;
	scanf("%d",&n);
	while(i<n/2){
		if(n%i==0){
		flag=1;
		break;
	}
	i++;
}
if(flag==0){

printf("primenumber");
}
else{
	printf("notprime");
	}
}
