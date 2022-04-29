#include<iostream>
using namespace std;
// program Title : give value From user in Array Check Max Number in Array using Helper Function
// Date /4/02/2022/ 
// check Max Number in Arrayy

class Demo
{ public: Count(int Arr[], int isize)
 {
    int iCnt1 = 0, iMax = 0;
    for(iCnt1 = 0; iCnt1<isize; iCnt1++)
    {
       if(Arr[iCnt1] > iMax )
       {
            iMax = Arr[iCnt1];
       }
    }
    cout<<" Max Number is >> "<< iMax <<"\n";  // Display MAx Number
 }
    
}; Demo obj;

int main()
{
  int length = 0;
  int i = 0;
  int *p = NULL;

 cout<<" Enter Number OF Elemnts\n";
 cin>>length;

 p = new int[length];
 
 cout<<" Enter Number\n";
 for(i = 0; i<length; i++)
 {
     cin>>p[i];

 }
   obj.Count(p , length);

   return 0;
}