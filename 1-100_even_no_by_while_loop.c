#include<stdio.h>
int main(){
	int a=1;
	while(a<=100){
		if(a%2 == 0){
			printf("%d ",a);
		}
		a++;
	}
	return 0;
}