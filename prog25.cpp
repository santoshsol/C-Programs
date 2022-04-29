#include<iostream>
using namespace std;
// Program Title : take no From user and Display ABCD Latter on that Number
// using seprate  1 Helper Function
// Date /1/2/2022/

// Input :      6
// iCnt         1    2   3   4    5   6
// Output :     a    b   c   d   e   f

class Demo
{
    public: int  Display(int ino2)
     {
         char  ch = 'A';
        int iCnt = 1;

      for (iCnt = 1; iCnt<=ino2; iCnt++)
      {
        cout<<" "<<ch<<"\t";
        ch++;
      }
      cout<<" \n";

     }

}; Demo obj;


int main()
{
    int ino1 = 0;
    cout<<" Enter Number\n";
    cin>>ino1;
   
   obj. Display(ino1);
    return 0;
}