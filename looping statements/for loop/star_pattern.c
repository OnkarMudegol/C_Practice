// WAP a program to print the following star pattern 
// *
// * *
// * * *
// * * * *
#include<stdio.h>
int main()
{
    int row,star;
    for (row=1;row<5;row++)
    {
        for(star=1;star<=row;star++)
        {
            printf("* ");
        }
        printf("\n");
    }
}