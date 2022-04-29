#include<iostream>
using namespace std; 
// Program Title : give value From user in Array Check Deffirance in   Max Number and  Min Number
// Array using Helper Function
// Date /5/02/2022/ 

class Demo
{ 
    public: int Deffirnce(int Brr[], int isize)

     {
          int iCnt  = 0;
          int imax = Brr[0], iMin = Brr[0];
          for(iCnt = 0; iCnt<isize; iCnt++)
          {
              if(Brr[iCnt]< iMin)
              {
                  iMin = Brr[iCnt];
              }
            else if(Brr[iCnt] > imax)
              {
                  imax = Brr[iCnt];
              }
           }
         return imax - iMin;
    }

};Demo obj;

int main()
{
    int length = 0, i = 0, iret = 0;
    int *p = NULL;

   cout<<" Enter Number OF Elemnts\n";
   cin>>length;

   cout<<" Enter Elemnts\n";
   p = new  int [length];
   
   for(i = 0; i<length; i++)
   {
      cin>>p[i];
   }
 
   iret = obj. Deffirnce (p, length);

   cout<<"Deffirance is >> "<<iret<<"\n";
   return 0;
}