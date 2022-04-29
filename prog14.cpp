#include<iostream>
using namespace std;
// program Title:: Enter Any Number And Display   that Number Table
// using HaradCore VAlue

void Display(int ino2)
{
   int i = 0;
   for(i= 0; i<=10; i++)
   {
       cout<<" "<<ino2 * i<<"\n";
   }

}

int main()
{
    int ino1 = 5;

    Display(ino1);

    return 0;
}