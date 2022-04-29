#include<iostream>
using namespace std;
// program Title : Take Chracter From user and Toggle Chracter 
// type P > Display p  type a >Display A
// Date /05/02/2022/ 

class Demo
{  public: char CharToggle(char ch2)
  {
      if((ch2>='A') && (ch2<='Z'))
      {
            return ch2 + 32;
      }
      else if((ch2>='a') && (ch2<='z'))
      {
             return ch2 - 32;
      }
  }


}; Demo obj;

int main()
{
    char ch = '\0';
    char iret = '\0';
    
    cout<<" Enter Character\n";
    cin>>ch;

    iret = obj.CharToggle(ch);

     cout<<" Toggled letter is>>"<< iret <<"\n";
    return 0;
}


