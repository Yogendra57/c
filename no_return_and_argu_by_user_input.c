#include<stdio.h>
void add(int a, int b,float c,float d,long e);
void div(int a, int b,float c,float d,long e);
void multi(int a, int b,float c,float d,long e);
void mod(int a, int b,float c,float d,long e);
void sub(int a, int b,float c,float d,long e);
int main(){
	int a,b;
float c,d;
long e;
printf("enter two int values");
	scanf("%d %d",&a,&b);
	printf("enter two floating point numbers");
	scanf("%f %f",&c,&d);
	printf("enter one long number");
	scanf("%ld",&e);
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
	f=a+b+c+d;
	g=e-f;
	printf("sub %ld\n",g);
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

