//print 5 time "jay ganesh..." , using for loop

#include<stdio.h>

void Display()
{
    register int  iCnt = 0;
//        (1)        (2)        (3) 
    for( iCnt = 1; iCnt <= 5; iCnt ++)
    {
 //               (4)
        printf("Jay Ganesh...\n"); 
    }
}

int main()
{
    
    Display();

    return 0;
}