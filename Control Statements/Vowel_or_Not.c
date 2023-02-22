// WAP to print whether the charcter is vowel or consonant
#include<stdio.h>
int main()
{
    char alp;
    printf("Enter the alphabet: ");
    scanf("%c",&alp);
    switch (alp)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
        break;
    }
    return 0;
}