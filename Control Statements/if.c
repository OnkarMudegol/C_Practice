// write a program to find wheteher given number is greater than 10
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%i",&num);
    if (num>10)
    {
        printf("\n%d is gretaer than 10.",num);
    }
    else{
        printf("\n%d is smaller than 10.",num);
    }
}