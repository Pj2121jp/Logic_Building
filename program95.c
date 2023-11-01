/*
    input ==>> Rows : 3
               Columns : 4

    OutPut ==>>
                1 1 1 1
                1 1 1 1
                1 1 1 1 
    
*/

#include<stdio.h>

void Display(int iRows,int iColumns)
{
   for(int i=1;i<=iRows;i++)
    {
        for(int j=1;j<=iColumns;j++)
        {
            printf("1\t");
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