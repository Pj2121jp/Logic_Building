#include<stdio.h>
#include<stdlib.h>


float Average(int Arr[],int iSize)
{
    int  iSum = 0;
    float fAverage = 0.0f;
   
     for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    fAverage  = ((float)iSum / (float)iSize);
    
    return fAverage;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    float fRet = 0 ;

    printf("Enter the Element : ");
    scanf("%d",&iCount);

    ptr = (int*)malloc(iCount * sizeof(int));
    printf("Dynamic memory allocation gets allocateed Succesfully for %d element \n",iCount);

    printf("Enter %d the elements : \n",iCount);

    for (int iCnt=0; iCnt<iCount;iCnt++)
    {
        printf("\n Enter the element no %d :  ",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    } 
     
     fRet =  Average(ptr,iCount);

    printf(" Avrage is ==>> %f ",fRet);

     free(ptr);
     printf("\nDynamic memory deallocation gets deallocateed Succesfully...\n");

    return 0;


}
