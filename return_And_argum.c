#include<stdio.h>
int c;
int add(int a,int b){
	c=a+b;
	return c;
	
}
int sub(int a,int b){
	c=a-b;
	return c;
}
int multi(int a,int b){
	c=a*b;
	return c;
}
int div(int a,int b){
	c=a/b;
	return c;
}
int mod(int a,int b){
	c=a%b;
	return c;
}
int main(){
	int a,b,c,d,e;
	
 a=add(10,5);
	printf("add %d\n",a);
	b=sub(10,5);
	printf("sub %d\n",b);
	c=multi(10,5);
	printf("multi %d\n",c);
	d=div(10,5);
	printf("div %d\n",d);
	e=mod(10,5);
	printf("mod %d\n",e);
	
	return 0;
	
}
