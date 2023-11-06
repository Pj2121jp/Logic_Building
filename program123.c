#include<stdio.h>

int CountSmallChar(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if ((*str>='a')&&(*str<='z'))
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


    iRet = CountSmallChar( Arr );
    printf("Frquency of small latter is ==>> %d\n",iRet);

    return 0;
}