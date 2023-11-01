#include<stdio.h>
#include<stdlib.h>

// void Display(int *Arr,int iSize)
void Display(int Arr[],int iSize)
{
    printf(" Element of the Array is \n ==>>>  ");
    for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    } 
    printf("\n");
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
     
     Display(ptr,iSize);

     free(ptr);
     printf("\nDynamic memory deallocation gets deallocateed Succesfully...\n");

    return 0;

}
