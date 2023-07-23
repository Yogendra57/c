#include<stdio.h>
int main(){
	int i,j;
	printf("Enter starting number");
	scanf("%d",&i);
	printf("\nEnter ending number");
	scanf("%d",&j);
	for(i=i;i<=j;i++){
		printf("\n%d ",i);
	}
	return 0;
}
