#include<stdio.h>
int div(int a,int b);
int main(){
	div(50,10);
	return 0;
}
int div(int a,int b){
	printf("the division is %d ",a/b);
	return a/b;
}
