#include<stdio.h>
int main(){
	int i,j,k;
	printf("Enter number of rows");
	scanf("\n%d",&k);
	for(i=k;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
