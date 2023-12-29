/*
    iMask : 0000 0000 0000 0000 0000 0000 0000 0001

    iPos : 6

    iMask = iMask << (iPos-1)
    iMask = iMask<<5;


    iMask : 0000 0000 0000 0000 0000 0000 0000 0001

    iMask : 0000 0000 0000 0000 0000 0000 0010 0000
*/
#include<stdio.h>
#include<stdbool.h>

bool ChkBit(int iNo, int iPos)
{
    int iMask = 0x00000001;
    int iResult = 0;
    
    iMask = iMask << (iPos-1);

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    int iNo = 0;
    int iPos = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    printf("Enter the Position : \n");
    scanf("%d",&iPos);

    bRet =ChkBit(iNo, iPos);

    if(bRet)
    {
        printf("%d Position is ON",iPos);
    }
    else
    {
        printf("%d Position is OFF",iPos);
    }
    return 0;
}