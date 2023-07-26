#include<stdio.h>
void add(int a, float b);
int main(){
	int a;
	float b;
	printf("enter two numbers");
	scanf("%d %f",&a,&b);
	add(a,b);
	return 0;
}
void add(int a, float b){
	
	float c;
	c=a+b;
	printf("\n%.2f",c);
}
