#include<stdio.h>
int fact(int);
void main (){
	int a;
	scanf("%d",&a);
	int res=fact(a);
	printf("%d",res);
}
int fact(int a){
	int res=1,i;
	i=a;
	for(i=1;i<=a;i++){
		res=res*i;
}
return res;
}
