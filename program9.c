 //--->>   PI*radius*radius

 //Probllem Statement : Accept the radius form user and calculate the area of circle

 // Step 1   : Understand the problem statement
// Conclusion : we are gong to use formula As PI*R*R  

//Step 2 : Algorithm

/*
    START
         Accept radious from usr and store into RADIUS
         create variable as PI store  value 3.14
         calculate Area PI*radius*radius
         Display the value of area to usr
*/

#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////////
//  
// Function Name :   CalculateArea
// Description :     It is used to calculate Area of Circle
// Input Arguments : float
// Output :          float
// Author :          Prasad Ravindra Patil 
// Date :            2/10/2023 (Update : 02/10/2023)
//
/////////////////////////////////////////////////////////////////////////////////////



float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;

    auto const float PI = 3.14;

    fAns = PI * fValue * fValue;

    return fAns;


}

/////////////////////////////////////////////////////////////////////////////////////
//  
//  Enter Point Function of an application which performs addition of two integers
//  
/////////////////////////////////////////////////////////////////////////////////////

int main()
{

    auto float fRadius =0.0f;
    auto float fArea = 0.0f;

    printf("Enter the Radius of circle : \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of Circl is : %f\n",fArea);

    return 0;
}