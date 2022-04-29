#include<iostream>
using namespace std;
// Program Title : take no From user and Display reverse Number on that Number
// using seprate  1 Helper Function
// Date /31/1/2022/
// Input :      5
// Output :     5   4   3   2   1

class Demo
{
   public:  void Display(int ino1)
     {
          int iCnt = 0;

        for(iCnt = ino1; iCnt>0; iCnt--)
        {
            cout<<" "<<iCnt<<"\t";
        }
     }


}; Demo obj;

int main()
{
    int ino1 = 0;

    cout<<" Enter Number\n";
    cin>>ino1;

    obj.Display(ino1);

    return 0 ;

}
