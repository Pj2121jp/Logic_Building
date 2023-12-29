#include<stdio.h>
#include<stdbool.h>

int ToggleBit(int iNo)
{
    int iMask = 0X00004000;
    int iResult  = 0;

    iResult = iNo^iMask;

   return iResult;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    iRet = ToggleBit(iNo);

    printf("Updated Number is : %d",iRet);

    return 0;
}
