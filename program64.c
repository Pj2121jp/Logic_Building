#include<stdio.h>
#include<stdbool.h>

bool CheckPaindrom(int iNo)
{
    int iCopy = iNo;    //Xerox kadhli
     int iRev = 0;
     int iDigit = 0;

     while(iNo!=0)
     {
        iDigit=iNo%10;
        iNo=iNo/10;

        iRev = (iRev*10)+iDigit;
     }
     return(iRev == iCopy);  
   
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet= CheckPaindrom(iValue);

    if(bRet == true)
    {
        printf("%d is a Pallindrom number",iValue);
    }
    else
    {
        printf("%d is not a Pallindrom number",iValue);
    }

    return 0;
}