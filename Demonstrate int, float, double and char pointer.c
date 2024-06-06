#include<stdio.h>
void main(){
	int num=23;
	float f=3.14;
	double d=2.71828;
	char ch='D';
	int *intptr=&num;
	float *floatptr=&f;
	double *doubleptr=&d;
	char *charptr=&ch;
	printf("%d\n",*intptr);
	printf("%2f\n",*floatptr);
	printf("%lf\n",*doubleptr);
	printf("%ch\n",*charptr&ch);
}
