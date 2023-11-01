/*
    input ==>>   5
    Outpu t==>> 0 1 2 3 4 5 
*/

#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt=0;iCnt<=iNo;iCnt++)
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