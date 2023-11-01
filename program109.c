/*
    input ==>> Rows : 4
               Columns : 4

    OutPut ==>> # $ $ $ 
                * # $ $
                * * # $ 
                 

*/

#include<stdio.h>

void Display(int iRows,int iCol)
{
   for(int i=1;i<=iRows;i++)
    {
        for(int j=1;j<=iCol;j++)
        {
           if(i==j)
           {
            printf("*\t",j);
           }
           else if (i>=j)
           {
             printf("*\t");
           }
          
           
            
        }
        printf("\n\n");
    }
    printf("\n");
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter the Rows : ");
    scanf("%d",&iNo1);

    printf("Enter the Columns : ");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);

    return 0;
}