// WAP a program to print the following star pattern 
// * * * *
// * * *
// * * 
// * 
#include<stdio.h>
int main()
{
    int row,star;
    for (row=4;row>=1;row--)
    {
        for (star=1;star<=row;star++)
        {
            printf("*");    
        }
        printf("\n");
    }
}