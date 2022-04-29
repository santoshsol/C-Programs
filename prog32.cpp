#include<iostream>
using namespace std;
// Program Title :: give value From user in Array make Addition that value   using Helper Function
// Date /31/2/2022/ 

class Demo
{
   public: int Display (int Brr[], int size)
   {
      int i = 0, isum = 0;

      for(i = 0; i<size; i++)
      {
          isum = isum + Brr[i];
      }
       return isum;
   }


};Demo obj;

int main()
{
    int  ilenght = 0,i = 0,  iret = 0;
    int *p = NULL;

     cout<<"Enter Number of Elements\n";
     cin>>ilenght;
    
     p = new int[ilenght]; // Dynamic memory Allocation
     
     cout<<" Enter the Elements\n";
  
  for(i = 0; i <ilenght; i++)
  {
    cin>> p[i];  // i made and pointer mde value kadun gya
  }
    
    iret = obj. Display(p,ilenght);

    cout<<" Addition is ..."<<iret<<"\n";
    delete []p;
    return 0;
     
  
}