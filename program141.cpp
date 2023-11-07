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
                cout<<"Elemenets of thr Array are : "<<endl;

                for(int iCnt = 0; iCnt<iSize;iCnt++)
                {
                    cout <<Arr[iCnt]<<"\t" ;
                }
            }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of element that you want to store : "<<endl;

    cin>>iLength;

    Array  aobj(iLength);

    aobj.Accept();
    aobj.Display();

    return 0;
}