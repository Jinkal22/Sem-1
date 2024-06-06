#include<stdio.h>
void main (){
	int n,i=2,count=0;
	scanf("%d",&n);
	while(i<n)
{
	if(n%i==0)
	{
		count=1;
		break;
	}
	i++;
  }
  if(count==1){

printf("not prime");
}
else{
	printf("prime");
}
	
}

