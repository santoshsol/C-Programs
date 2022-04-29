#include<iostream>
using namespace std;
// program Title : take no From user and Display * and Number  that Number
// using seprate  1 Helper Function
// Date /31/1/2022/

class Demo
{
   public:  void Display(int ino1)
     {
       int iCnt = 0;

       for (iCnt = 0; iCnt<=ino1; iCnt++)
       {
          cout<<"* \t"<<iCnt<<"\t";
       }

     }

}; Demo obj;

int main()
{
    int ino1 = 0;

    cout<<" Enter Number\n";
    cin>>ino1;

    obj.Display(ino1);
    return  0;
}