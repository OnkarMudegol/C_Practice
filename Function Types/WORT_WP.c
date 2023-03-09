// Without return type with parameter
#include<stdio.h>
void multiply(int a, int b);
int main()
{
    int num1,num2;
    printf("Enter two numbers with a space:");
    scanf("%d %d",&num1,&num2);
    multiply(num1,num2);
    return 0;
}
void multiply(int a, int b)
{
    printf("Product is: %d",a*b);
}