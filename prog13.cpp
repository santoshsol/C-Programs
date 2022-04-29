#include<iostream>
using namespace std;
// program Title Check Perfect Number is  or not
// using seprate 2 Helper Function
// Date /9/1/2022/
// 1+2+3 = 6 
// 1+2+4+7+14 = 28

class Demo
{
   public:  bool CheckParfect(int input)
   {  int rNumber = 0;
      rNumber = SumFact(input);
      if (rNumber == input)
      {
         return true;
      }
      else
      {
          return false;
      }  
   }

   int SumFact(int ino3)
   {
        int iCnt = 1, isum = 0;

       for(iCnt = 1; iCnt<=ino3/2; iCnt++)
       {
          if((ino3 % iCnt) == 0)
          
           isum = isum + iCnt;
       }
       return isum; 
   }

}; Demo obj;




int main()
{
  bool iret = false;
  int ino1 = 0;

  cout<<" Enter Number\n";
  cin>>ino1;

 iret = obj.CheckParfect(ino1);
 if(iret == true)
 {
    cout<<" It is Parfect Number\n";
 }
 else
 {
     cout<<" It is Not Parfect Number\n";
 }
 
    return 0;
}