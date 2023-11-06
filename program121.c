#include<stdio.h>

int CountA(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if (*str=='a')
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
    int iRet = 0;

    printf("Enter the String ==>> ");
    scanf("%[^'\n']s",&Arr);

    iRet = CountA(Arr);
    printf("Count a is ==>> %d\n",iRet);

    return 0;
}