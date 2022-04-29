#include<iostream>
using namespace std;
// Program Title: give value From user in Array Count >10   <20 Number that Array that value using Helper Function
// Date /4/02/2022/                                                                                          
// Count number 10>  <20  total Number in Array

class Demo
{  public: Count(int Arr[], int isize)
   {
      int iCnt1 = 0, iCnt2 = 0;
      for(iCnt1 = 0; iCnt1<isize; iCnt1++)
      {
          if((Arr[iCnt1]>10) && (Arr[iCnt1]<20))  // &&  Opertor use kra
         {
             iCnt2++;
         }
      }
    cout<<"   10<<>>20 inbetween Number iS>>"<<iCnt2<<" \n";
}

};Demo obj;

int main()
{
    int length = 0;
    int i = 0;
    int *p = NULL;

    cout<<" Enter Number OF Elemnts\n ";
    cin>>length;
    
    p = new int[length];

    cout<<" Enter Number\n";
    for(i = 0; i<length; i++)
    {
        cin>>p[i];
    }

   obj.Count(p, length);

   return 0;
}