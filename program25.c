#include<stdio.h>

float Average(int iNO1,int iNO2,int iNO3)
{
    float fAns =0.0f;
    fAns=((float)(iNO1+iNO2+iNO3)/3);

    return fAns;
}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto int iValue3=0;
    auto  float fRet = 0.0f;

    printf("Enter first no : ");
    scanf("%d",&iValue1);
    
    printf("Enter second no : ");
    scanf("%d",&iValue2);

    printf("Enter third no : ");
    scanf("%d",&iValue3);

    fRet = Average(iValue1,iValue2,iValue3);

    printf("The Average is : %f \n",fRet);

    return 0;

}