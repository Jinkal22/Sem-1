#include<stdio.h>
void main(){
	int a[3][3],c[3][3],d[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter the element into a[%d][%d]: " ,i,j);
			scanf("%d",&a[i][j]);
			printf("enter the element into a[%d][%d]: " ,i,j);
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			d[i][j]=a[i][j]+c[i][j];
			printf("%d\t",d[i][j]);
			
		}
		printf("\n");
	}
}
