#include<stdio.h>
int a=10,b=5,c;
int add(){
	c=a+b;
	return c;
	
}
int sub(){
	c=a-b;
	return c;
}
int multi(){
	c=a*b;
	return c;
}
int div(){
	c=a/b;
	return c;
}
int mod(){
	c=a%b;
	return c;
}
int main(){
	int a,b,c,d,e;
 a=add();
	printf("add %d\n",a);
	b=sub();
	printf("sub %d\n",b);
	c=multi();
	printf("multi %d\n",c);
	d=div();
	printf("div %d\n",d);
	e=mod();
	printf("mod %d\n",e);
	
	return 0;
	
}
