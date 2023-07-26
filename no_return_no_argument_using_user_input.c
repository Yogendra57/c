#include<stdio.h>
int a,b,c;

void add(){
	printf("enter two values");
scanf("%d %d",&a,&b);
	c=a+b;
	printf("add %d\n",c);
	
}
void sub(){
	c=a-b;
	printf("sub %d\n",c);
}
void multi(){
	c=a*b;
	printf("multi %d\n",c);
}
void div(){
	c=a/b;
	printf("div %d\n",c);
}
void mod(){
	c=a%b;
	printf("mod %d\n",c);
}
int main(){
	add();
	sub();
	multi();
	div();
	mod();
	
	return 0;
	
}
