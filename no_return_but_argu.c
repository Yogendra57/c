#include<stdio.h>

void add(int a,int b){
	int c=a+b;
	printf("add %d\n",c);
	
}
void sub(int a, int b){
	int c=a-b;
	printf("sub %d\n",c);
}
void multi(int a,int b){
	int c=a*b;
	printf("multi %d\n",c);
}
void div(int a,int b){
	int c=a/b;
	printf("div %d\n",c);
}
void mod(int a,int b){
	int c=a%b;
	printf("mod %d\n",c);
}
int main(){
	add(10,5);
	sub(10,5);
	multi(10,5);
	div(10,5);
	mod(10,5);
	
	return 0;
	
}
