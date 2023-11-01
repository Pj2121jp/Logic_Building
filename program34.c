//print  "jay ganesh..." , using for loop , accept the value from user

#include<stdio.h>

void Display(int iNo)
{
         int  iCnt = 0;
         
//        (1)        (2)        (3) 
    for( iCnt = 1; iCnt <= iNo; iCnt ++)
    {
 //               (4)
        printf("Jay Shree Mahakal.. \t  Jay Ganesh...\n"); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you display Jay Ganesh on screen  : ");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}