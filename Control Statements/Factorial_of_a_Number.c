// WAP to find the factorial of a number
#include<stdio.h>
int main()
{
    int num;
    int fact =1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<0)
    {
        printf("There is no factorial for negative numbers!");
    }
    else{
        printf("The factorial of %d is: ",num);
        for (int i=1; i<=num; i++)
    {
        fact*=i;
    }
    printf("%d",fact);
    }
}

// WAP to find the sum of n numbers
