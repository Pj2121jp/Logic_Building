//Accept n number from user and MaxMin number print

#include<stdio.h>
#include<stdlib.h>


int MaxMin(int Arr[],int iSize)
{
    int iMax = Arr[0];
    int iMin = Arr[0];

    
    for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        if( Arr[iCnt] > iMax)
        {
          iMax = Arr[iCnt];   
        }
        if( Arr[iCnt] > iMax)
        {
          iMax = Arr[iCnt];   
        }
    } 
    printf("Maximum element is : %d \n",iMax);
    printf("Minimum element is : %d \n",iMin);
    
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;


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
     
     MaxMin(ptr,iSize);

     free(ptr);
     printf("\nDynamic memory deallocation gets deallocateed Succesfully...\n");

    return 0;

}
