#include<stdio.h>
void main (){
	int BS,HRA,DA;
	printf("enter the basic salary");
	scanf("%d",&BS);
	
	if (BS >= 10000){ 
		HRA = BS*0.20;
		DA = BS*0.80;
		printf ("result %d",BS+HRA+DA);
	}
	
	if (BS >= 20000){
		HRA = BS*0.25;
		DA = BS*0.90;
		printf ("result %d",BS+HRA+DA);
	}
	
	if (BS >= 30000){
		HRA = BS*0.30;
		DA = BS*0.95;
		printf ("resullt %d",BS+HRA+DA);
	}
	
	}

