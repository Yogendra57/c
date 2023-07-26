#include<stdio.h>
int add(int a, int b,float c,float d,long e);
int div(int a, int b,float c,float d,long e);
int multi(int a, int b,float c,float d,long e);
int mod(int a, int b,float c,float d,long e);
int sub(int a, int b,float c,float d,long e);
int main(){
	int a,b;
float c,d;
long e,g,h,i,j,k;
printf("enter two int values");
	scanf("%d %d",&a,&b);
	printf("enter two floating point numbers");
	scanf("%f %f",&c,&d);
	printf("enter one long number");
	scanf("%ld",&e);
	g=add(a,b,c,d,e);
	printf("add %ld\n",g);
	h=div(a,b,c,d,e);
	printf("div %ld\n",h);
	i=multi(a,b,c,d,e);
	printf("multi %ld\n",i);
	j=mod(a,b,c,d,e);
	printf("mod %ld\n",j);
	k=sub(a,b,c,d,e);
	printf("sub %ld\n",k);
}
long f,g;
int add(int a, int b,float c,float d,long e){
	f=a+b+c+d+e;
	g=f;
	return g;
}
int sub(int a, int b,float c,float d,long e){
	f=a+b+c+d;
	g=e-f;
	return g;
	
}
int multi(int a, int b,float c,float d,long e){
	f=e*a*b*c*d;
	g=f;
	return g;
	
}
int mod(int a, int b,float c,float d,long e){
	f=a+b+c+d;
	g=e%f;
	return g;
	
}
int div(int a, int b,float c,float d,long e){
	f=a+b+c+d;
	g=e/f;
	return g;
	
	
}

