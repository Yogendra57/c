#include<stdio.h>
int even(int a,int b);
int main(){
	int s,e;
	printf("enter a starting number");
	scanf("%d",&s);
	printf("enter a ending number");
	scanf("%d",&e);
	even(s,e);
	return 0;

}
int even(int a,int b){
	if(a%2==0){
		int c;
		for(c=a;a<=b;a+=2){
			printf("%d ",a);
		}
	}
	else
	{
		a++;
		int c;
		for(c=a;a<=b;a+=2){
			printf("%d ",a);
		}
	}
	
}
