// Write a program to compare three numbers
#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter first number: ");
   scanf("%d",&a);
   printf("Enter second number: ");
   scanf("%d",&b);
   printf("Enter third number: ");
   scanf("%d",&c);
   if(a>b&a>c)
   {
       printf("%d is greater thhan %d and %d",a,b,c);
   }
   else if(b>a&b>c)
   {
       printf("%d is greater thhan %d and %d",b,a,c);
   }
   else if(c>a&c>b)
   {
       printf("%d is greater thhan %d and %d",c,a,b);
   }
}