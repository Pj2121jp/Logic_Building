//Accept n number from user and display even number

#include<stdio.h>
#include<stdlib.h>


void DisplayOddNunber(int Arr[],int iSize)
{
    printf(" Odd Element of the Array is \n ==>>>  ");
    for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2) !=0 )
        {
             printf("%d\t",Arr[iCnt]);
        }
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
     
     DisplayOddNunber(ptr,iSize);

     free(ptr);
     printf("\nDynamic memory deallocation gets deallocateed Succesfully...\n");

    return 0;

}
