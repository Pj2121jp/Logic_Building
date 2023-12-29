#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    int iMask = 0X00010000;
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
        printf("17rd bit is ON");
    } 
    else
    {
        printf("17rd bit is OFF");
    }
    return 0;
}

/*
    0000 0000 0000 0001 0000 0000 0000 0000 
    0       0   0   1   0    0      0    0  

    0X00010000

*/