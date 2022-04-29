#include<iostream>
using namespace std;
// take Number from user  using 2 function 
// program Title  using modd operator we can got remindar any Number After Division
// Count total Number in reminder only Even Number
// Date/30/1/2022/

class Demo
{   public: CountEven(int ino2)
  {   int iCnt = 0, iDigit = 0;
     
    if(ino2 == 0)
    {
        return 1;
    }
    
    if (ino2<0)
    {
        ino2 = - ino2;
    }
    
    while (ino2>0)
    {
        iDigit = ino2 %10;  // Display ino2 %2 kra
        if((ino2 % 2) == 0)  
        {
            iCnt++;  
        }
        ino2 = ino2/10;
    }
       return iCnt;
  }

}; Demo obj;

int main()
{
    int ino1 = 0, iret = 0;

    cout<<" Enter Number\n";
    cin>>ino1;


    iret = obj.CountEven(ino1);

    cout<<" EvenCount is::> "<<iret<<"\n";

    return 0;
}
