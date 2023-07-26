#include<stdio.h>
int add();
int div();
int multi();
int mod();
int sub();
int main(){
	

long g,h,i,j,k;
	g=add();
	printf("add %ld\n",g);
	h=div();
	printf("div %ld\n",h);
	i=multi();
	printf("multi %ld\n",i);
	j=mod();
	printf("mod %ld\n",j);
	k=sub();
	
	printf("sub %ld\n",k);
	
	
	
}
long f,g;
int add(){
int a,b;
float c,d;
long e;
printf("For addition\n");
	printf("enter two int values");
	scanf("%d %d",&a,&b);
	printf("enter two floating point numbers");
	scanf("%f %f",&c,&d);
	printf("enter one long number");
	scanf("%ld",&e);
	f=a+b+c+d+e;
	return f;
	
}

int sub(){
	int a,b;
float c,d;
long e;
printf("For addition\n");
	printf("enter two int values");
	scanf("%d %d",&a,&b);
	printf("enter two floating point numbers");
	scanf("%f %f",&c,&d);
	printf("enter one long number");
	scanf("%ld",&e);
	f=e-a+b+c+d;
	return f;
}
int multi(){
	int a,b;
float c,d;
long e;
printf("For substraction\n");
	printf("enter two int values");
	scanf("%d %d",&a,&b);
	printf("enter two floating point numbers");
	scanf("%f %f",&c,&d);
	printf("enter one long number");
	scanf("%ld",&e);
	f=e*a*b*c*d;
	return f;
}
int mod(){
	int a,b;
float c,d;
long e;
printf("For mod\n");
	printf("enter two int values");
	scanf("%d %d",&a,&b);
	printf("enter two floating point numbers");
	scanf("%f %f",&c,&d);
	printf("enter one long number");
	scanf("%ld",&e);
	f=a+b+c+d;
	g=e%f;
	return g;
	
}
int div(){
	int a,b;
float c,d;
long e;
printf("For division\n");
	printf("enter two int values");
	scanf("%d %d",&a,&b);
	printf("enter two floating point numbers");
	scanf("%f %f",&c,&d);
	printf("enter one long number");
	scanf("%ld",&e);
	f=a+b+c+d;
	g=e/f;
	return g;
	
	
}

