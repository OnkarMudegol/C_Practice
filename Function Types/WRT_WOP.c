// With return type without parameter
#include<stdio.h>
int multiply(); //function prototype
int main()
{
int d=multiply();
printf("Multiplication= %d",d);
return 0;
}
int multiply() //function definition
{
int a=30,b=40;
return(a*b);
}