#include<iostream>
using namespace std;
// Program Title:: Take small Character From user and Convert That 
// Character Small to Capital
// Date/05/02/2022/

class Demo
{
   public: char SmallTOCapital(char ch2)
   {
        if((ch2>='a') && (ch2<='z'))
        {
            return ch2 -32; 
        }
        
   }

}; Demo obj;

int main()
{
  char ch ='\0';
  char ch3 = '\0';
  cout<<" Enter Character\n";
  cin>>ch;

 ch3 = obj.SmallTOCapital(ch);

   cout<<" SmallTo Capital "<< ch3 <<"\n";
  return 0 ;

}