#include<stdio.h>
int main(){
	int num;
	printf("enter a number");
	scanf("%d",&num);
	int i=1,fact =1;
	while(i<=num){
		fact = fact*i;
		i++;
	}
	printf("factorial of given number is %d",fact);
	return 0;
}
