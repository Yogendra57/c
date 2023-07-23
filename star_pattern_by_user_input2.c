#include<stdio.h>
int main(){
	int i,j;
	printf("enter number of rows");
	scanf("%d",&i);
		printf("enter number of column");
	scanf("%d",&j);
	int k,l;
	for(k=i;k<=l;k++){
		for(l=i;l<=j;l++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
