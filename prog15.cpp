#include<iostream>
using namespace std;
// program Title:: Take  Any Number from user  And Display   that Number Table
// 30/1/2022/

class Demo
{
     public: void Table(int ino2)
     {
          int i = 0;
          int Table = 0;
          for(i = 0; i<=10; i++)
          { 
             Table  = i * ino2;
            cout<<" "<<Table<<" \n";  // 5ino2   + 5 + 10 + 15 + 20 + 25+ 30+ 35+ 40+ 45+ 50
          }
  
 }

}; Demo obj;

int main()
{
    int ino1 = 0;

    cout<<" Enter Number\n";
    cin>>ino1;

    obj.Table(ino1);

    return 0;
}