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
	int a,b,c,d,e,f,g;
	printf("enter two int values");
	scanf("%d %d",&f,&g);
 a=add(f,g);
	printf("add %d\n",a);
	b=sub(f,g);
	printf("sub %d\n",b);
	c=multi(f,g);
	printf("multi %d\n",c);
	d=div(f,g);
	printf("div %d\n",d);
	e=mod(f,g);
	printf("mod %d\n",e);
	
	return 0;
	
}
