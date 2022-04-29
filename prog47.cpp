#include<iostream>
using namespace std;
// Program Title : Take  character From  user  And Check Small Character 
// Date /5/02/2022/ 

class Demo
{  public: bool CheckSmall(char ch2)
  {  
      if ((ch2>='a') && (ch2<='z'))
      {
          return true;
      }
      else
      {
          return false;
      }
 }

};Demo obj;

int main()
{
     char ch = '\0';
     bool iret = false;

     cout<<" Enter Character\n";
     cin>>ch;

     iret = obj.CheckSmall(ch);
     if (iret == true)
     {
          cout<<" It is Small Character \n";
     }
     else
     {
         cout<<" It is NOT  Small Character \n";
     }
        return 0;
}