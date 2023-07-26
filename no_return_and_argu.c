#include<stdio.h>
void add(int a, int b,float c,float d,long e);
void div(int a, int b,float c,float d,long e);
void multi(int a, int b,float c,float d,long e);
void mod(int a, int b,float c,float d,long e);
void sub(int a, int b,float c,float d,long e);
int main(){
	int a=5,b=6;
float c=5.5,d=2.3;
long e=55;
	add(a,b,c,d,e);
	div(a,b,c,d,e);
	multi(a,b,c,d,e);
	mod(a,b,c,d,e);
	sub(a,b,c,d,e);
}
long f,g,h;
void add(int a, int b,float c,float d,long e){
	f=a+b+c+d+e;
	printf("add %ld\n",f);
}
void sub(int a, int b,float c,float d,long e){
	f=e-a+b+c+d;
	printf("sub %ld\n",f);
}
void multi(int a, int b,float c,float d,long e){
	f=e*a*b*c*d;
	printf("multi %ld\n",f);
}
void mod(int a, int b,float c,float d,long e){
	f=a+b+c+d;
	g=e%f;
	printf("mod %ld\n",g);
}
void div(int a, int b,float c,float d,long e){
	f=a+b+c+d;
	g=e/f;
	
	printf("div %ld\n",g);
}

