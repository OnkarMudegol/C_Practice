// Without return type without parameter
#include<stdio.h>
void multiply(); //function prototype
int main()
{
    multiply();   //calling function
    return 0;
}
void multiply()   //function definition
{
    int a=4, b=9;
    printf("4 times 9 is: %d",a*b);
}