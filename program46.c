// Addition Factor
#include<stdio.h>

int AdditionFactor(int iNo)
{
         int  iCnt = 0;

         int iSum = 0;

          for( iCnt = 1; iCnt <= (iNo/2); iCnt ++)   
        {
             if((iNo % iCnt)==0)
             {
                iSum = iSum + iCnt;

               //  iSum += iCnt;

             }     
        }
        return iSum;
}

int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("=========================================================================\n");
    printf("Enter number of times you want to display  on screen  ==>> ");
    scanf("%d",&iValue);
    printf("=========================================================================\n\n");
    
    iRet = AdditionFactor(iValue);

    printf("=========================================================================\n");
    printf("Addition of factor is %d\n",iRet);
    printf("=========================================================================\n");

    return 0;
}



//  Time Complexity O(N/2)     