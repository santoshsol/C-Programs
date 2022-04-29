#include<iostream>
using namespace std;
// Program Title:: Display minimum Number
// Date /31/1/2022/

class Demo
{
    public: int MinNumber(int ivalue1 , int ivalue2)
    {
        int iReslut = 0;

        if (ivalue1<ivalue2)
        {
            iReslut = ivalue1;
        }
        else
        {
            iReslut = ivalue2;
        }
    
        return iReslut;
    }


};Demo obj;


int main()
{
      int ino1 = 0, ino2 = 0, iret = 0;
    
    cout<<" Enter First Number\n";
    cin>>ino1;

    cout<<" Enter Second Number\n";
    cin>>ino2;

   iret = obj.MinNumber(ino1,ino2);

   cout<<"MIN NUMBER>> "<<iret<<"\n";

    return 0 ;
}