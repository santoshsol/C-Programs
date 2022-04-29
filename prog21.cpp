#include<iostream>
using namespace std;
// Program Title : take no From user if Number is Even Display * OR Display #  Number on that Number
// using seprate  1 Helper Function
// Date /31/1/2022/
// Input :      5
// Input :      6
// iCnt          1    2   3   4    5   6
// Output :    *    #   *   #   *   #


class Demo
{
     public: void Display(int ino2)
     {
         int iCnt = 0;

         for(iCnt = 0; iCnt<=ino2; iCnt++)
          {
              if(( iCnt % 2) == 0)
              {
                 cout<<" * \t";
             
              }
              else
              {
                  cout<<" # \t";
              }
          }
     }

}; Demo obj;

int main()
{
    int ino1 = 0;

    cout<<" Enter Number\n";
    cin>>ino1;

    obj.Display(ino1);

    return 0;
}
