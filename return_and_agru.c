#include<stdio.h>
int add(int a, int b,float c,float d,long e);
int div(int a, int b,float c,float d,long e);
int multi(int a, int b,float c,float d,long e);
int mod(int a, int b,float c,float d,long e);
int sub(int a, int b,float c,float d,long e);
int main(){
	int a=5,b=6;
float c=5.5,d=2.3;
long e=55,f,g,h,k,j;
	f=add(a,b,c,d,e);
	printf("add %ld\n",f);
	g=div(a,b,c,d,e);
	printf("div %ld\n",g);
	h=multi(a,b,c,d,e);
	printf("multiplication %ld\n",h);
	k= mod(a,b,c,d,e);
	printf("mod %ld\n",k);
	j=sub(a,b,c,d,e);
	printf("sub %ld\n",j);
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

