#include<stdio.h>
void main(){
	int a[4][1],i,j;
	for(i=0;i<4;i++){
		for(j=0;j<1;j++){
			printf("enter the element into a[%d][%d]: " ,i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<1;j++){
			printf("marks=%d",a[i][j]);
		}
		printf("\n");
	}
}
