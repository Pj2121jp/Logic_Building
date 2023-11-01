#include <stdio.h>

int CalculateCube(int iNo)
{
    int iCube = 0;

    iCube = iNo * iNo * iNo;

    return iCube;
}

int main()
{
    auto  int iValue = 0;
    auto  int iAns = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iAns = CalculateCube(iValue);

    printf("Cube is : %d\n", iAns);

    return 0;
}