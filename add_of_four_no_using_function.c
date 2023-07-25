#include<stdio.h>
int add(int a,int b,int c,int d);
int main(){
	add(2,5,7,5);
	return 0;
}
int add(int a,int b,int c,int d){
	printf("the sum is %d ",a+b+c+d);
	return a+b+c+d;
}

