// ChackPerfact 

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfact(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if (iNo < 0 ) //Updator
    {
        iNo = -iNo;
    }

    for( iCnt = 1; iCnt <= (iNo/2); iCnt ++)
    {
         if((iNo % iCnt)==0)
             {
                iSum = iSum + iCnt;
             }

             

    }
        if (iSum==iNo)
        {
            return true;
        }
        else
        {
            return false;
        }

}
int main()
{
    int iValue = 0;

    bool bRet = false;

    printf("=========================================================================\n");
    printf("Enter the number ==>> ");
    scanf("%d",&iValue);
    printf("=========================================================================\n\n");
    
    bRet = CheckPerfact(iValue);

    if (bRet==true)
    {
        printf("=========================================================================\n");
        printf(" %d ==>> is Perfect Number \n",iValue);
        printf("=========================================================================\n");

    }
    else
    {
        printf("=========================================================================\n");
        printf(" %d ==>> is Not Perfact Number \n",iValue);
        printf("=========================================================================\n");
    }

    return 0;
}



//  Time Complexity O(N/2)     