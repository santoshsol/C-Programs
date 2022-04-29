#include<iostream>
using namespace std;
// Program Title : take no From user and Display Even  Number on that Number
// using seprate  1 Helper Function
// Date /6/12/2021/
// Input :    5
// iCnt        1    2   3   4    5
// Output :    2    4   6   8   10


class Demo
{
public: void DisplayEven(int ino2)
{
     int iCnt = 0;
    for(iCnt = 0; iCnt<=ino2; iCnt++)
    {
       if((iCnt % 2) == 0)
       {
          cout<<"  "<<iCnt<<"\n";
       }
    }
}

}; Demo obj;

int main()
{
    int ino1 = 0;

    cout<<" Enter Number\n";
    cin>>ino1;

    obj.DisplayEven(ino1);
    
    return 0;
}