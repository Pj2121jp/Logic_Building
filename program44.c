// ChackFactor
#include<stdio.h>

void DisplayFactor(int iNo)
{
         int  iCnt = 0;

          for( iCnt = 1; iCnt <= iNo/2; iCnt ++)   
        {
             if((iNo % iCnt)==0)
             {
                printf("%d is a factor of %d\n",iCnt,iNo);
             }
             
            
        }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to display  on screen  ==>> ");
    scanf("%d",&iValue);
    
    DisplayFactor(iValue);

    return 0;
}