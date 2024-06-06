#include<stdio.h>
void main (){
	
	float unit,totalbill;
	printf("enter an unit : ");
	scanf("%f",&unit);
	if (unit<=50){
		totalbill = unit*0.50;
	}
	if (unit>50 && unit<=150){
		totalbill =50*0.5 + (unit-50)*0.75;
	}
	if (unit>150 && unit<=250){
		totalbill =50*0.5 + 100*0.75 + (unit-150)*1.20; 
	}
	if (unit>250){
		totalbill = unit*1.50;
	}
	totalbill=totalbill+(totalbill*0.20);
	printf("totalbill = %f",totalbill);
	
}
