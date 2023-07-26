#include<stdio.h>

void add(int a,int b){
	int c=a+b;
	printf("add %d\n",c);
	
}
void sub(int a, int b){
	int c=a-b;
	printf("sub %d\n",c);
}
void multi(int a,int b){
	int c=a*b;
	printf("multi %d\n",c);
}
void div(int a,int b){
	int c=a/b;
	printf("div %d\n",c);
}
void mod(int a,int b){
	int c=a%b;
	printf("mod %d\n",c);
}
int main(){
	int a,b;
	printf("enter two values");
	scanf("%d %d",&a,&b);
	add(a,b);
    sub(a,b);
	multi(a,b);
	div(a,b);
	mod(a,b);
	
	return 0;
	
}

