#include<stdio.h>
int main(){
	int num ,rem ,sum=0,temp=num;
	printf("enter any number");
	scanf("%d",&num);
	while(num>0){
		rem = num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	if(temp == sum){
		printf("this is a pallindromic number\n");
	}
	else{
		printf("this is not a pallindromic number\n");
	}
	return 0;
}
