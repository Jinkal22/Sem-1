#include<stdio.h>
void main(){
	int a[3][3],i,j,positive=0,negative=0,zero=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter the element into a[%d][%d]: " ,i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>0){
			    positive++;
			}
			else if(a[i][j]<0){
				negative++;
			}
			else {
				zero++;
			}
	}
}
printf("positive element:%d\n",positive);
printf("negative element:%d\n",negative);
printf("zero element:%d\n",zero);
	}
	
		
