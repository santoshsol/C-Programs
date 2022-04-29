#include<iostream>
using namespace std;
// program Tital : give value From user in Array Make Addition of Odd Number Number that Array that value using Helper Function
// Date /4/02/2022/

class Demo
{    public: OddAddition(int Arr[], int isize)
 {    int iSum = 0, i = 0;

      for(i = 0; i<isize; i++)
      {
          if((Arr[i] %2) !=0)
          {
              iSum = iSum + Arr[i];
          }
      }
      cout<<"Odd Addition is "<<iSum<<" \n";
 }

};Demo obj;


int main()
{
    int  iCnt = 0;
    int *p = 0;
    int Length = 0;
    cout<<" Enter Number Of Elemnts\n";
    cin>>Length;

    p = new int[Length];
    for(iCnt = 0; iCnt<Length; iCnt++)
    {
        cin>>p[iCnt];
    }

    obj. OddAddition(p, Length);

    return 0;
}