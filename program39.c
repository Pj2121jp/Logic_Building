//print  number , using for loop , accept the value from user

#include<stdio.h>

void Display(int iNo)
{
         int  iCnt = 0;
         
//        (1)        (2)        (3) 
    for( iCnt = 1; iCnt <= iNo; iCnt ++)   //Forward print
    {
 //               (4)
        printf("%d\n",iCnt); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to display  on screen  ==>> ");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}