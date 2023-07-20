 #include<stdio.h>
int main(){
	int num,sum=0,rem,temp=num;
	printf("enter any number");
	scanf("%d",&num);
	while(num>0){
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(temp==sum){
		printf("this is an ammstrong number\n");
	}
	else
	printf("this is not an ammstrong number\n");
	return 0;
}
