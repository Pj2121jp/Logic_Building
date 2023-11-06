#include<stdio.h>

void struprX(char str[])
{
   
    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str=*str-32;
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


    struprX( Arr );
    printf("convert upper case is ==>> %s\n",Arr);

    return 0;
}