#include<iostream>
using namespace std;
// take Number from user  using 2 function 
// program Title using modd operator we can got remindar any Number After Division
// Count total Number in reminder
// Date/30/1/2022/
class Demo
{
    public: CountNumber(int ino2)
    {
         int iDigit = 0, iCnt =0;

         while(ino2>0)
         {
             iDigit = ino2 % 10;
             iCnt++;
             ino2 = ino2 /10;
         }
        return iCnt;
    }

}; Demo obj;


int main()
{
    int ino1 = 0, iret = 0;

    cout<<" Enter Number\n";
    cin>>ino1;

    iret = obj. CountNumber(ino1);

    cout<<" Addition is "<<iret<<"\n";

    
}