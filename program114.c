#include<stdio.h>
#include<stdbool.h>

int CheckChar(char cValue)
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

   bRet = CheckChar(ch);

   if (bRet == true)
   {
     printf("%c is capital",ch);

   }
   else
   {
    printf("%c is small",ch);

   }

    return 0;
}