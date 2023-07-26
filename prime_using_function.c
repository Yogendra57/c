#include<stdio.h>
int prime(int num,int num2);
int main(){
	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a ending number");
	scanf("%d",&b);
	prime(a,b);
	return 0;
}
int prime(int num,int num2){
	int i;
	for(i=num;i<=num2;i++){
		if(i%2==0 && i%i==0 ){
			printf("%d",i);
			i++;
		}
		else
	{
		i++;
	}
	}
	
}
