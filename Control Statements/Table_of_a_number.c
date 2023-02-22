// WAP to print table of any number by using fpr loop
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The tabel of %d is as follows:\n",num);
    for (int i=1; i<=10; i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}