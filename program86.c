/*
    input ==>>   4
    Outpu t==>> -4-2-1 0 1 2 3 4  
*/

#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt= -iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}