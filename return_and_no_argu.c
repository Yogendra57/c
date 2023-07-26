#include<stdio.h>
int add();
int div();
int multi();
int mod();
int sub();
int main(){

long g,h,i,j,k;
	g=add();
	h=div();
	i=multi();
	j=mod();
	k=sub();
	printf("add %ld\n",g);
	printf("sub %ld\n",h);
	printf("multi %ld\n",i);
	printf("mod %ld\n",j);
	printf("div %ld\n",k);
}
int a=5,b=6;
float c=5.5,d=2.3;
long e=55;
long f,g;
int add(){
	f=a+b+c+d+e;
	return f;
}
int sub(){
	f=e-a+b+c+d;
	return f;
}
int multi(){
	f=e*a*b*c*d;
	return f;
}
int mod(){
	f=a+b+c+d;
	g=e%f;
	return g;
	
}
int div(){
	f=a+b+c+d;
	g=e/f;
	return g;
	
	
}

