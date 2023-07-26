#include<stdio.h>
void add(int a,int b);
void div(int a,int b);
void sub(int a,int b);
int main(){
	add(1,2);
	sub(10,5);
	div(10,2);
	return 0;
}
void add(int a,int b){
	int c=a+b;
	printf("%d",c);
}
void sub(int a,int b){
	int c= a-b;
	printf("%d",c);
}
void div(int a,int b){
	int c=a/b;
	printf("%d",c);
}
