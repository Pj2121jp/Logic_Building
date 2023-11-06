#include<stdio.h>
#include<stdbool.h>

int CheckChar(char c)
{
    if (c>='A' && c<='Z')
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
    bool bret = false;

    printf("Enter the char : ");
    scanf("%c",&ch);

   bret = CheckChar(ch);

   if (bret == true)
   {
     printf("%c is capital",ch);

   }
   else
   {
    printf("%c is small",ch);

   }

    return 0;
}