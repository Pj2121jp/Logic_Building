#include<stdio.h>

int DisplayResult(float fMark)

{
    if((fMark >= 0.0) && (fMark <35.00))
    {
        printf("Fail");
    }
    else if((fMark >= 36.00)&& (fMark <50.00))
    {
        printf("Pass");
    }
     else if((fMark >= 66.00)&& (fMark <60.00))
    {
        printf("Second Class: ");
    }
    else if((fMark >= 60.00)&& (fMark <75.00))
    {
        printf("First Class: ");
    }
    else if((fMark >= 75.00)&& (fMark <=100))
    {
        printf("First Class with Destineshion");
    }
    
   
}

int main()
{
    auto  float fValue = 0.0f;

    
    printf("Enter your Marks : ");
    scanf("%f",&fValue);
     
     DisplayResult(fValue);
   

    return 0;
}