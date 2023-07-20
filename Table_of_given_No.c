#include<stdio.h>
int main(){
	int num,i=1,table;
	printf("Enter a number:");
	scanf("%d",&num);
	while(i<=10){
		table=num*i;
		
		printf("%d * %d = %d\n",num , i ,table);
		i++;
	}
	return 0;
}
