#include<stdio.h>
#include<stdbool.h>

bool ChakeEven(int iNo)
{
    if ((iNo % 2)==0)
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
    int iValue =0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChakeEven(iValue);
    if (bRet == true)
    {
        printf("%d is an even no\n",iValue);
    }
    else
    {
        printf("%d is an Odd no\n",iValue);
    }

    return 0;
}