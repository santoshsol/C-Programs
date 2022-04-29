#include<iostream>
using namespace std;
// Program Title : give value From user in Array Count Even Number that Array that value using Helper Function
// Date /4/2/2022/ 
// Count Even Number  total Number in Array


class Demo
{
   public:CountEven(int Arr[], int size)
   {
       int i = 0, iCnt2 = 0;

       for(i = 0; i<size; i++)
       {
          if((Arr[i] % 2) == 0 )
          {
             iCnt2++;
          }
       }
       cout<<" "<<iCnt2<<"\n";
   }

}; Demo obj;

int main()
{
    int iLenght = 0, iCnt = 0;
    int * p = NULL;

    cout<<" Enter Number oF Elemnts\n";
    cin>>iLenght;

     p = new int[iLenght];

     cout<<" Enter Elemnts ";

     for(iCnt = 0; iCnt<iLenght; iCnt++)
     {
          cin>> p[iCnt];
     }
  
      obj.CountEven(p, iLenght);
      return 0;

}