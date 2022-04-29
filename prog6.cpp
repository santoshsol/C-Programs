#include<iostream>
using namespace std;

//  Program Title >Mod  operator it give  remindr if we Divide any Number
//  using while loop
//  Date /8/ 1/ 2022/

void Display()
{
   int ino1 = 24810;
   int idgit = 0;

   while(ino1>0)
   {
       idgit = ino1%10;
       cout<<" "<<idgit<<"\n";
       ino1 = ino1 /10;
   }

}


int main()
{
   Display();
  
   return 0;
}