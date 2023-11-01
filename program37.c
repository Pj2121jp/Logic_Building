//print  number , using for loop , accept the value from user

#include<stdio.h>

void Display(int iNo)
{
         int  iCnt = 0;
         
//        (1)        (2)        (3) 
    for( iCnt = 1; iCnt <= iNo; iCnt ++)
    {
 //               (4)
        printf("Hello ==>>> [%d]\n",iCnt); 
    }
}

int main()
{
    
    Display(8);

    return 0;
}