#include<stdio.h>
int palindrome (int num);
int main() {
int a;

printf("enter three digit number");
scanf ("%d" ,&a);
palindrome(a);
return 0;
}
int palindrome (int num) {
int sum=0, rem, temp=num;
while (num>0){
rem =num%10;
sum = sum*10+rem;
num=num/10;
}
if (temp==sum) {
printf("this is palindrome number");
}
else{
printf("this is not pallindromic number");
}
return temp == sum;
}
