/*
    Pattern:
                  1 2 3 4 5 6 
           ==>>   * * * * * * 
*/

#include<stdio.h>

void Display()
{
    for(int iCnt=1;iCnt<=6;iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    
    Display(10);

    return 0;
}