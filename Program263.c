#include<stdio.h>

int main()
{
    int iNo = 0;
    int iMask = 4;
    int iResult  = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iNo);

    iResult = iNo&iMask;

    if(iResult== iMask)
    {
        printf("3rd bit is ON");
    }
    else
    {
        printf("3rd bit is OFF");
    }
    return 0;
}