#include<stdio.h>
#include<stdbool.h>

int OffBit(int iNo)
{
    int iMask = 0X00020000;
    int iResult  = 0;

    iResult = iNo&iMask;

    if(iResult == iMask) // 4th bit is ON
    {
        return (iNo ^ iMask);
    }
    else                // 4th bit is off
    {
        return iNo;
    }
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    iRet = OffBit(iNo);

    printf("Updated Number is : %d",iRet);

    return 0;
}
