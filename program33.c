//print 5 time "jay ganesh..." , using for loop

#include<stdio.h>

void Display(int iNo)
{
         int  iCnt = 0;
         
//        (1)        (2)        (3) 
    for( iCnt = 1; iCnt <= iNo; iCnt ++)
    {
 //               (4)
        printf("Jay Ganesh...\n"); 
    }
}

int main()
{
   
    Display(8);

    return 0;
}