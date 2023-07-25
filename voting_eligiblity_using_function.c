#include<stdio.h>
int voter(int a);
int main(){
	int age;
	printf("enter your age");
	scanf("%d",&age);
	    voter(age);
	return 0;
}
int voter( int a){
	
	if(a>=18){
		printf("you are eligible for voting");
	
	}
	else{
		printf("you are not eligible for voting");
	}
}
