#include<stdio.h>
int main(){
	int a,b;
	printf("Enter starting number");
	scanf("%d",&a);
	printf("Enter ending number");
	scanf("%d",&b);
	//int c;
	for(a=a;a<=b;a++)
	{
		if(a%2 == 1)
		{
			printf("%d ",a);
		}
		
	}
	return 0;
}

