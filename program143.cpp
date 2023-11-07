#include<iostream>
using namespace std;

class Array
{
    private:
            int *Arr; //int *Arr;
            int iSize;

    public:
            Array(int X)
            {
                iSize=X;
                Arr = new int[iSize];
            }
            ~Array()
            {
                delete[]Arr;
            }
            void Accept()
            {
                cout<<"Please enter the elements : "<<endl;
                for(int iCnt = 0; iCnt<iSize; iCnt++)
                {
                    cin>>Arr[iCnt];
                }
            }
            void Display()
            {
                cout<<"Array element is : "<<endl;

                for(int iCnt = 0; iCnt<iSize;iCnt++)
                {
                    cout<<Arr[iCnt]<<"\t" ;
                }
                cout<<endl;
            }
            int AdditionEven()
            {
                int iSum = 0;

                for(int iCnt=0; iCnt<iSize;iCnt++)
                {
                    if((Arr[iCnt]%2)==0)
                    {
                        iSum=iSum+Arr[iCnt];
                    }

                }
                return iSum;
            }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of element that you want to store : "<<endl;

    cin>>(iLength);

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    iRet = aobj -> AdditionEven();

    cout<<"Addition of even element is : "<<iRet<< endl;

    delete aobj;

    return 0;
}