#include<stdio.h>

void strlwrX(char str[])
{
   
    while(*str != '\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        str++;
    }
}

int main()
{

    char Arr [20];
    int iRet = 0;

    printf("Enter the String ==>> ");
    scanf("%[^'\n']s",&Arr);


    strlwrX( Arr );
    printf("convert lower case is ==>> %s\n",Arr);

    return 0;
}