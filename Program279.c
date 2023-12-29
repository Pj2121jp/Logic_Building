/*
    iMask : 0000 0000 0000 0000 0000 0000 0000 0001

    iPos : 6

    iMask = iMask << (iPos-1)
    iMask = iMask<<5;


    iMask : 0000 0000 0000 0000 0000 0000 0000 0001

    iMask : 0000 0000 0000 0000 0000 0000 0010 0000
*/
#include<stdio.h>

int ToggleBit(int iNo, int iPos)
{
    int iMask = 0x00000001;
    int iResult = 0;
    
    iMask = iMask << (iPos-1);

    iResult = iNo ^ iMask;
    
    return iResult;
}


int main()
{
    int iNo = 0;
    int iPos = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    printf("Enter the Position : \n");
    scanf("%d",&iPos);

    iRet = ToggleBit(iNo, iPos);

    printf("The Updated Number : %d",iRet);
    return 0;
}