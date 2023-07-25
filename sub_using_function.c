#include<stdio.h>
int sub(int a,int b);
int main(){
	sub(50,10);
	return 0;
}
int sub(int a,int b){
	printf("the substraction is %d ",a-b);
	return a-b;
}
