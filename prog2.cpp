#include<iostream>
using namespace std;
// Input : 1
// Output : 1

// Input : 3   >>>> 3 x 2 x 1 = 6
// Output : 6 

// Input : 5
// Output : 120

//  program Title >gives  Number from use and return Factorial that Number
//  Date /29/ 1/ 2022


   class Demo
{  public: int  Factorial(int ino2)
   {
        int iCnt = 0, iFact = 1;

        for(iCnt = 1; iCnt<=ino2; iCnt++)
        {
             iFact = iFact * iCnt;
        }
        return iFact;
   }

};Demo obj;


int main()
{
   int ino1 = 0;
   int iret = 0;

   cout<<" Enter Number\n";
   cin>>ino1;

   iret = obj.Factorial(ino1);
  
   cout<<" Factorial is>>"<<iret<<"\n";
   return 0;


}