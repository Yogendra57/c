#include<stdio.h>
void add();
int main(){
	add();
	return 0;
}
void add(){
	int a;
	float b,c;
	printf("enter two numbers");
	scanf("%d %f",&a,&b);
	c=a+b;
	printf("\n%.2f",c);
}
