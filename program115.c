#include<stdio.h>
#include<stdbool.h>

int ReturnOpposite(char cValue)
{
    if (cValue>='A' && cValue<='Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the char : ");
    scanf("%c",&ch);

   bRet = ReturnOpposite(ch);

   if (bRet == true)
   {
     printf("Convert Small is : %c ",ch+32);

   }
   else
   {
    printf("Convert Capital is : %c",ch-32);

   }

    return 0;
}