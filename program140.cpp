#include<iostream>
using namespace std;

class Number
{
    private:
            int iNo;

    public:
            Number(int x)
            {
                iNo=x;
            }

        int Factorial()
                {
                    int iFact = 1;

                    for(int iCnt = 1; iCnt <= iNo; iCnt ++)
                    {
                        iFact=iFact*iCnt;
                    }

                    return iFact;

                }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    Number *nobj = new Number(iValue);
    //Number nobj(iValue);

    iRet=nobj->Factorial();

    cout<<"Factorial is :  "<<iRet<<endl;
    
    delete nobj;

    return 0;
}