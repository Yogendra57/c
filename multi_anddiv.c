#include<stdio.h>
void multi(int a, float b);
void div(int a, float b);
int main(){
	int a;
	float b;
	printf("enter two numbers");
	scanf("%d %f",&a,&b);
	multi(a,b);
	div(a,b);
	return 0;
}
void multi(int a, float b){
	
	float c;
	c=a*b;
	printf("\n%.2f",c);
}
void div(int a, float b){
	
	float c;
	c=a/b;
	printf("\n%.2f",c);
}
