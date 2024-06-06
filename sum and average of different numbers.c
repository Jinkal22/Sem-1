#include<stdio.h>
void main (){
	int n,sum=0,count=0,avg=0;
	while(1){
		scanf("%d",&n);
	 if(n==0){
	 	break;
	 }
	 sum+=n;
	 count++;
	}
	avg=sum/count;
	printf("sum=%d,avg=%d",sum,avg);
}
