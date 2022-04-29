#include<iostream>
using namespace std;
// take Number from user  using 2 function 
// program Title using modd operator we can got remindar any Number After Division
// Make Reverse  total Number in reminder 
// Date/30/1/2022/
class Demo
{
    public: int Revrese(int ino2)
    {
        int  iDigit = 0, Rev = 0;

        if(ino2 == 0)
        {
            return 1;
        }
        if(ino2<0)
        {
            ino2 = - ino2;
        }
    
       while (ino2>0)
       {
          iDigit = ino2 % 10;
          cout<<" "<<iDigit<<" \n";
           
         Rev = (Rev *10) + iDigit;   // (Rev * 10) Important
         ino2 = ino2 /10;
       }
       
         return Rev;
    
    }

}; Demo obj;


int main()
{
    int ino1 = 0;
    int iret = 0;

    cout<<" Enter Number\n";
    
    cin>>ino1;

    iret = obj.Revrese(ino1);
    cout<<" Revrese Number is::>"<<iret<<"\t";

    return 0;
}