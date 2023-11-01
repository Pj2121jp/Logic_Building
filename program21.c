#include<stdio.h>

void DisplayExamTime (int iStd)
{
    switch (iStd)
    {
    
        case 1:
            printf("Exam time ts 8.00 Am :\n");
            break;
        case 2:
            printf("Exam time ts 9.00 Am :\n");
            break;
        case 3:
            printf("Exam time ts 10.00 Am :\n");
            break;
        case 4:
            printf("Exam time ts 11.00 Am :\n");
            break;
        case 5:
            printf("Exam time ts 12.00 NooN :\n");
            break;
        default:
            printf("Enter valid standerd : \n");
            
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