#include<iostream>
using namespace std;
// Program Title : give value From user in Array Check Min Number in Array using Helper Function
// Date /22/2/2022/ 
// check Min Number in Arrayy

class Demo
{ public: Count(int Arr[], int isize)
 {
    int iCnt = 0;
    int Min = Arr[0];
    
    for(iCnt = 0; iCnt<isize; iCnt++)
    {
       if(Arr[iCnt] < Min )
       {
            Min = Arr[iCnt];  // Display Min Number in Array
       }
    }
    cout<<" Min Number is >> "<< Min<<"\n";
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