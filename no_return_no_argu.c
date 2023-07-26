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
int a=5,b=6;
float c=5.5,d=2.3;
long e=55,f,g,h;
void add(){
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

