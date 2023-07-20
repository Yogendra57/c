#include<stdio.h>
int main(){
	printf("Table of 2 \n");
	int i=1;
	int t=2;
	int j;
	while(i<=10){
		
		j=t*i;
		i++;
		printf("%d\n",j);
	}
	return 0;
}
