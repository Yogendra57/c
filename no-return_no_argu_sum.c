#include<stdio.h>
void sum(){
	long a;
	double b,d;
	printf("enter a two value");
	scanf("%ld %lf",&a,&b);
	d=a+b;
	printf("\nthe sum of given values are %lf",d);
}
int main(){
	sum();
	return 0;
}
