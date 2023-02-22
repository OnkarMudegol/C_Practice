// WAP to print the sum of digits of a number
#include<stdio.h>
int main()
{
    int num,n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        n=num%10;
        sum+=n;
        num=num/10;
    }
    printf("The sum of digits is: %d",sum);
}