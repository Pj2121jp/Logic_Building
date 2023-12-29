#include<stdio.h>
#include<stdbool.h>
/*
    3rd and 9th
*/
bool CheckBit(int iNo)
{
    int iMask = 260;
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
        printf("3rd and 9th bit is ON");
    } 
    else
    {
        printf("3rd and 9th bit is OFF");
    }
    return 0;
}