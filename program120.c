#include<stdio.h>

int strlnX(char str[])
{
    int length = 0;
    while(*str != '\0')
    {
        length++;
        str++;
    }
     return length;
}

int main()
{

    char Arr [20];
    int iRet = 0;

    printf("Enter the String ==>> ");
    scanf("%[^'\n']s",&Arr);

    iRet = strlnX(Arr);
    printf("String  length is ==>> %d\n",iRet);

    return 0;
}