#include<stdio.h>
#include<stdlib.h>

// void Display(int *Arr,int iSize)
void Display(int Arr[],int iSize)
{
    printf("Your element is ==>>  ");
    for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    } 
}

int main()
{
    int iSize = 0;

    int *ptr = NULL;

    printf("Enter the Size of Array : ");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter %d the elements : ",iSize);

    for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    } 
     
     Display(ptr,iSize);

     free(ptr);

    return 0;

}
