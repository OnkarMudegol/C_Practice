// Write a program to check wheteher a number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("%d is divisible by 5",num);
    }
    else if(num%5!=0)
    {
        printf("%d is not divisible by 5",num);
    }
}