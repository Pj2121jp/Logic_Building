#include<stdio.h>

int CountChar(char str[],char Ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if (*str== Ch)
        {
            iCnt++;
        }
        str++;
    }
     return iCnt;
}

int main()
{

    char Arr [20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String ==>> ");
    scanf("%[^'\n']s",&Arr);

    printf("Enter the char ==>> ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);
    printf("Count a is ==>> %d\n",iRet);

    return 0;
}