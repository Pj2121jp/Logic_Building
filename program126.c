#include<stdio.h>

int CountVowels(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if (*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u')
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


    iRet = CountVowels( Arr );
    printf("Count of vowels is ==>> %d\n",iRet);

    return 0;
}