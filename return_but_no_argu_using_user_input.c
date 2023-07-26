#include<stdio.h>
int a,b;
int add(){
	int a,b;
	printf("addition\n");
printf("enter two values");
scanf("%d %d",&a,&b);
	int c=a+b;
	return c;
	
}
int sub(){
	int a,b;
	printf("sub\n");
	printf("enter two values");
scanf("%d %d",&a,&b);
	int c=a-b;
	return c;
}
int multi(){
	int a,b;
	printf("multiplication\n");
	printf("enter two values");
scanf("%d %d",&a,&b);
	 int c=a*b;
	return c;
}
int div(){int a,b;
	printf("div\n");
	printf("enter two values");
scanf("%d %d",&a,&b);
	int c=a/b;
	return c;
}
int mod(){
	int a,b;
	printf("mod\n");
	printf("enter two values");
scanf("%d %d",&a,&b);
	int c=a%b;
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
