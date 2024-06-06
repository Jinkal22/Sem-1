#include<stdio.h>
void main (){
	int *ptr;
	int n;
	printf("enter Dynamic array size: ");
	scanf("%d",&n);
	ptr=(int *)malloc (n*sizeof(int));
	int i;
	for (i=0;i<n;i++){
		// ptr [i] =,ptr+i;
		scanf("%d",ptr+i);
		}
		for(i=0;i<n;i++){
			printf("%d",*(ptr+i));
		}
}
