#include<stdio.h>
#include<stdbool.h>
/*
   7th and 15th 
*/
bool CheckBit(int iNo)
{
    int iMask = 0X00000a00;
    int iResult  = 0;

    iResult = iNo&iMask;

    if(iResult== iMask)
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
    bool bRet = false;
    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    bRet = CheckBit(iNo);

    if(bRet==true)
    {
        printf("10 12 bit is ON");
    } 
    else
    {
        printf("10 12 bit is OFF");
    }
    return 0;
}
/*

0000 0000 0000 0000 0000 1010 0000 0000
0       0    0  0   0      a    0   0

0X00000a00

*/