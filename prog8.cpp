#include<iostream>
using namespace std;

// take Number from user 
// program Title using modd operator we can got remindar any Number After Division
// and making Addition thise reminder
// 876543
// 8+7+6+5+4+3 = 33
// Date/8/1/2022/


class Demo
{
     public: int Addition(int ino2)
     {
         int idigit = 0, isum = 0;

         while(ino2>0)
         {
             idigit = ino2%10;
             isum = isum + idigit;
             ino2 = ino2 /10;
         }
       return isum;
    }

}; Demo obj;


int main()
{
    int ino1 = 0, iret = 0;

    cout<<" Enter Number";
    cin>>ino1;

   iret = obj.Addition(ino1);

   cout<<"Addition is "<< iret<<"\n";
}