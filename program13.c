#include <stdio.h>

int CalculateCube(int iNo)
{
    int long iCube = 0;

    iCube = iNo * iNo * iNo;

    return iCube;
}

int main()
{
    auto  int iValue = 0;
    auto long int iAns = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iAns = CalculateCube(iValue);

    printf("Cube is : %ld\n", iAns);

    return 0;
}