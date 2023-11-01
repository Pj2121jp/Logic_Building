//Accept n number from user and Smallest number print

#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[],int iSize)
{
    int iMin = Arr[0];

    
    for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        if( Arr[iCnt] < iMin)
        {
          iMin = Arr[iCnt];   
        }
    } 
    return iMin;
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
     
     iRet = Minimum(ptr,iSize);

     printf("Smallest element is %d",iRet);

     free(ptr);
     printf("\nDynamic memory deallocation gets deallocateed Succesfully...\n");

    return 0;

}
