#include<stdio.h>

void DisplayExamTime (int iStd)
{
    if(iStd==1)
    {
        printf("your Exam at 8.00 Am \n");
    }
    else if(iStd==2)
    {
        printf("your Exam at 9.00 Am \n");
    }
    else if(iStd==3)
    {
        printf("your Exam at 10.00 Am \n");
    }
    else if(iStd==4)
    {
        printf("your Exam at 11.00 Am \n");
    }
    else if(iStd==5)
    {
        printf("your Exam at 12.00 NOON \n");
    }
    else
    {
        printf("invalid input \n");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter your Standerd : \n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);
     
     return 0;
}