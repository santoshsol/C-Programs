#include<iostream>
using namespace std;
// Program Title : give value From user in Array Count >10 Number that Array that value
// using Helper Function
// Date /4/02/2021/                                                                                                                                                                    
// Count  
class Demo
{   public: Count(int Arr[], int size)
   {
       int iCnt1 = 0, iCnt2 = 0;

       for(iCnt1 = 0; iCnt1<size; iCnt1++)
       {
          if(Arr[iCnt1]>5)
          {
              iCnt2 ++;
          }
       }
      cout<<" "<<iCnt2<<"\n";
  }


};Demo obj;


int main()
{
    
     int length = 0;
     int i = 0;
     int *p = NULL;

     cout<<" Enter Number Of Elemnts\n";
     cin>>length;

     cout<<" Enter Elemnts\n";
     p = new int [length];
     
     for( i = 0; i<length; i++)
     {
          cin>>p[i];
     }
     
     obj.Count( p, length);

      return 0;
}