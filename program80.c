//Accept n number from user and freuency number print

#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iSize)
{
    int iFrequency = 0 ;
    
    
    for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        if( Arr[iCnt] == 21)
        {
          iFrequency++ ;
        }
    } 
    return iFrequency;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the Size of Array : ");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    printf("Dynamic memory allocation gets allocateed Succesfully for %d element \n",iSize);

    printf("Enter %d the elements : \n",iSize);

    for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        printf("\n Enter the element no %d :  ",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    } 
     
     iRet = Frequency(ptr,iSize);

     printf("The Frequency is :  %d",iRet);

     free(ptr);
     printf("\nDynamic memory deallocation gets deallocateed Succesfully...\n");

    return 0;

}
