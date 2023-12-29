#include<stdio.h>
#include<stdbool.h>
/*
   7th and 15th 
*/
bool CheckBit(int iNo)
{
    int iMask = 0X00004040;
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
        printf("7th and 15th bit is ON");
    } 
    else
    {
        printf("7th and 15th bit is OFF");
    }
    return 0;
}
/*

0000 0000 0000 0000 0100 0000 0100 0000
0   0       0   0   4       0   4   0

0X00004040

*/