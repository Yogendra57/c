#include <stdio.h>
 int reverse(int num);
int main() {
int a;
printf("enter a number");
scanf ("%d",&a);
reverse(a);
return 0;
}
int reverse(int num) {
int sum=0, rem, temp=num;
while (num>0){
rem=num%10;
sum=sum*10+rem;
num=num/10; 
}
printf("the reverse of the number is %d",sum);
return sum;
}
