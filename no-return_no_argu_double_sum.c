#include<stdio.h>
void sum(){
	
	double a,b,d;
	printf("enter a two value");
	scanf("%lf %lf",&a,&b);
	d=a+b;
	printf("\nthe sum of given values are %.2lf",d);
}
int main(){
	sum();
	return 0;
}
