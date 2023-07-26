#include<stdio.h>
void add();
void div();
void multi();
void mod();
void sub();
int main(){
	add();
	div();
	multi();
	mod();
	sub();
}
int a,b;
float c,d;
long e,f,g,h;
void add(){
	printf("enter two int values");
	scanf("%d %d",&a,&b);
	printf("enter two floating point numbers");
	scanf("%f %f",&c,&d);
	printf("enter one long number");
	scanf("%ld",&e);
	f=a+b+c+d+e;
	printf("add %ld\n",f);
}
void sub(){
	f=e-a+b+c+d;
	printf("sub %ld\n",f);
}
void multi(){
	f=e*a*b*c*d;
	printf("multi %ld\n",f);
}
void mod(){
	f=a+b+c+d;
	g=e%f;
	printf("mod %ld\n",g);
}
void div(){
	f=a+b+c+d;
	g=e/f;
	
	printf("div %ld\n",g);
}

