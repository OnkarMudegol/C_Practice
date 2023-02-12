// write a program to check whether a number is divisble by 5 or not
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    (num%5==0)?printf("The number is divisible by 5"):printf("The number is not divisible by 5");
}