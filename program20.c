#include<stdio.h>

void DisplayResult(float fMark)

{
    if ((fMark < 0.00) || (fMark>100.00))   // Filter
    {
        printf("Invalid Input\n");
    }

    if((fMark >= 0.0) && (fMark <35.00))
    {
        printf("Fail\n");
    }
    else if((fMark >= 36.00)&& (fMark <50.00))
    {
        printf("Pass\n");
    }
     else if((fMark >= 66.00)&& (fMark <60.00))
    {
        printf("Second Class: \n");
    }
    else if((fMark >= 60.00)&& (fMark <75.00))
    {
        printf("First Class:\n");
    }
    else if((fMark >= 75.00)&& (fMark <=100))
    {
        printf("First Class with Destineshion\n");
    }
    
   
}

int main()
{
    auto  float fValue = 0.0f;

    printf("===================================\n");
    printf("Enter your Persentage : \n");
    printf("===================================\n");
    scanf("%f",&fValue);
    printf("===================================\n");
   
     DisplayResult(fValue);
    printf("===================================\n");
   

    return 0;
}