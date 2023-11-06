#include<stdio.h>

int strlnX(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
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

    iRet = strlnX(Arr);
    printf("length of String is ==>> %d\n",iRet);

    return 0;
}