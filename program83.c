/*
    Pattern:      n = 10
           ==>>   * * * * * * * * * *
*/

#include<stdio.h>

void Display(int iNo)
{
    for(int iCnt=0;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
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