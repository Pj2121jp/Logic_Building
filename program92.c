/*
    input ==>>   4
    Outpu t==>> A B C D
*/

#include<stdio.h>

void Display(int iNo)
{
    char ch = '\0';
    for(int iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
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