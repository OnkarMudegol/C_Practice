#include<stdio.h>
int main()
// {
//     int a;
//     printf("Enter value of a:");
//     scanf("%d",&a);
//     printf("Value of a is:%d",a);
//     return 0;
// }
// {
//     float a;
//     printf("Enter a float value:");
//     scanf("%f",&a);
//     printf("The value you entered is:%f",a);
//     return 0;
// }
//     char a;
//     printf("Enter a character:");
//     scanf("%c",&a);
//     printf("The character you entered is: %c",a);
//     return 0;
// }
{
    char a[30];
    printf("Enter your name:");
    scanf("%s",&a);
    printf("Good Morning: %s",a);
    return 0;
}
// Dynamic input with spaces
// #include<stdio.h>
// int main()
// {
//     char a[50];
//     printf("Enter your name: ");
//     // scanf("%s",&a);
//     scanf("%[^\n]%*c",&a);
//     printf("%s",a);
//     return 0;
// }