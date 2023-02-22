// WAP to create calculator by using switch statement and operator symbol
#include<stdio.h>
int main()
{
    char op;
    int num1,num2;
    printf("******Hello!!******\n");
    printf("Press + for addition");
    printf("\nPress - for substraction");
    printf("\nPress * for multiplication");
    printf("\nPress %% for division\n");
    scanf("%c",&op);
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);
    switch(op){
        default:
        printf("Inavlid input\n");
        case '+':
        printf("%d+%d=%d",num1,num2,(num1+num2));
        break;
        case '-':
        printf("%d-%d=%d",num1,num2,(num1-num2));
        break;
        case '*':
        printf("%d*%d=%d",num1,num2,(num1*num2));
        break;
        case '%':
        printf("%d%%%d=%d",num1,num2,(num1%num2));
        break;
        }
    return 0;           
}