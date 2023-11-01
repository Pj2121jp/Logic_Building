// ChackPrime

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0)   //updater
    {
        iNo = -iNo;
    }

    for( iCnt = 2; iCnt <= (iNo/2); iCnt ++)
    {
        if((iNo % iCnt)==0)
        {
            bFlag = false;
            break;
        }
       
    }
    return bFlag;
 
}

int main()
{
    int iValue = 0;

    bool bRet = false;

    printf("=========================================================================\n");
    printf("Enter the number ==>> ");
    scanf("%d",&iValue);
    printf("=========================================================================\n\n");
    
    bRet = CheckPrime(iValue);

    if (bRet==true)
    {
        printf("=========================================================================\n");
        printf(" %d ==>> is Prime Number \n",iValue);
        printf("=========================================================================\n");

    }
    else
    {
        printf("=========================================================================\n");
        printf(" %d ==>> is Not prime Number \n",iValue);
        printf("=========================================================================\n");
    }

    return 0;
}



//  Time Complexity O(N/2)     