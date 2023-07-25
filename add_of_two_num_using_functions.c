#include<stdio.h>
int add(int a,int b);
int main(){
	add(5,10);
	return 0;
}
int add(int a,int b){
	printf("the sum is %d ",a+b);
	return a+b;
}
