#include<stdio.h>

void strtoggleX(char str[])
{
   
    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
        }
       else if (*str>='A' && *str<='Z')
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


    strtoggleX( Arr );
    printf("convert Exchnge is ==>> %s\n",Arr);

    return 0;
}