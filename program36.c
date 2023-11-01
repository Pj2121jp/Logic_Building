//print  number , using for loop , accept the value from user

#include<stdio.h>

void Display()
{
         int  iCnt = 0;
         
//        (1)        (2)        (3) 
    for( iCnt = 1; iCnt <= 5; iCnt ++)
    {
 //               (4)
        printf("Hello ==>>> [%d]\n",iCnt); 
    }
}

int main()
{
    
    Display();

    return 0;
}