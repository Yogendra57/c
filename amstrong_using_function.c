#include <stdio.h>
 int amstrong(int num);
int main() {
int a;
printf("enter a number");
scanf ("%d",&a);
int c;
c=amstrong(a);
if(c==a){
	printf("this is an amstrong number");
}
else{
	printf("this is not an amstrong numer");
}
return 0;
}
int amstrong(int num) {
int sum=0, rem, temp=num;
while (num>0){
rem=num%10;
sum=sum+rem*rem*rem;
num=num/10; 
}

return sum;
}
