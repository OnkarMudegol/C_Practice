// WAP to demostrate go to statement
#include<stdio.h>
int main()
{
    int n=10;
    Value:
    printf("%d\n",n);
    n = n-1;

    if (n>0)
    {
        goto Value;
    }
    return 0;
}