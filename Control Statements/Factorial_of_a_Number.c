// WAP to find the factorial of a number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The factorials of %d are: ",num);
    for (int i=1; i<=num; i++)
    {
        if (num%i==0){
            printf("%d ",i);
        }
    }
}