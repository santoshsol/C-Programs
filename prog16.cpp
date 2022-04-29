#include<iostream>
using namespace std;
// Date /11/1/2022
// Enter  First Number >=2 nacha gunakar 4 timing >  2*2*2*2
// Enter Second Number >=4
//  Power is >>16
// program Title : Calculte  The Power of Number


class Demo
{
   public: Power(int x1 , int y1)
   {
       int iCnt = 0, imult = 1;

       for(iCnt = 1; iCnt<=y1; iCnt++)
       {
           imult = imult * x1;
       }
      return imult;
   }

}; Demo obj;

int main()
{
    int x = 0;
    int y = 0;
    int iret = 0;
    cout<<" Enter First  Number\n";
    cin>>x;

   cout<<" Enter Second Number\n";
   cin>>y;
   
   iret= obj.Power(x,y);

   cout<<"Power is ::> "<<iret<<"\n";
    return 0 ;
}