// WAP to print even numbers
#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter a number: ");
    scanf("%d",&i);
    printf("The even numbers are: \n");
    for(j=1;j<=i;j++)
    {
        if(j%2!=0)
        {
            continue;
        }
        printf("%d\n",j);
    }
    return 0;
}