#include<stdio.h>
int multi(int a,int b);
int main(){
	multi(50,10);
	return 0;
}
int multi(int a,int b){
	printf("the multiplication is %d ",a*b);
	return a*b;
}
