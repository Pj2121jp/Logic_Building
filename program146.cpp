
#include<iostream>
using namespace std;

class String
{
    private:
            char *str;
            int iSize;
    public:
            String()
            {
                iSize =20;
                str = new char[20];
            }
            String(int X)
            {
                iSize=X;
                str = new char[iSize];
            }
            ~String()
            {
                delete []str;
            }
            void Accept()
            {
                cout<<"Enter the String :  "<<endl;

                cin.getline(str,iSize);

                //gets(str);

            }
            void Dispaly()
            {
                cout<<"String is :  "<<str<<endl;
            }

            //Logic
   
};

int main()
{
    String sobj(30);

    sobj.Accept();
    sobj.Dispaly();
    
    return 0;
}