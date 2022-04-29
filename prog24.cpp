#include<iostream>
using namespace std;
// Program Title : take no From user OR Count  Total Number gratar >5
// using seprate  1 Helper Function
// Date /31/1/2022/

// Input : 127894 
// Output : 3

// Input : 561750
// Output : 4
class Demo
{
  public: int Display(int ino2)
  {
    int iCnt = 0;
    int iDigit = 0;

     while (ino2>0)
     {
      
      iDigit = ino2 % 10;
        
      if (iDigit > 5)
        {
           iCnt ++;
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

  iret = obj.Display(ino1);

   cout<<" "<<iret<<"\n";
   return 0 ;

}