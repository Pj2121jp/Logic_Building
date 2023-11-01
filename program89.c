/*
    input ==>>   4
    Outpu t==>> a b c d 
*/

#include<stdio.h>

void Display(int iNo)
{
    char ch = 'a';
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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