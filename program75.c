#include<stdio.h>
#include<stdlib.h>


int DisplayOddAddition(int Arr[],int iSize)
{
    int iSum = 0;
   
    for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2) !=0 )
        {
             iSum = iSum + Arr[iCnt];
        }
    } 
    return iSum;
    
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iRet = 0 ;

    printf("Enter the Element : ");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
    printf("Dynamic memory allocation gets allocateed Succesfully for %d element \n",iSize);

    printf("Enter %d the elements : \n",iSize);

    for (int iCnt=0; iCnt<iSize;iCnt++)
    {
        printf("\n Enter the element no %d :  ",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    } 
     
     iRet =  DisplayOddAddition(ptr,iSize);

    printf("Odd Number of Addition is ==>> %d",iRet);

     free(ptr);
     printf("\nDynamic memory deallocation gets deallocateed Succesfully...\n");

    return 0;

}
