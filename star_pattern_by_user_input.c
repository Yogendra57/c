#include<stdio.h>
int main(){
	int i,j,k;
	printf("Enter number of rows");
	scanf("\n%d",&k);
	for(i=1;i<=k;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
