#include<iostream>
using namespace std;
// Program Title : Take  character From  user  And Check Capital Character 
// Using ASSCI VAlue >65       90<
// Date /5/02/2022/ 

class Demo
{
   public: bool CheckCapital(char ch2)
   {
      
      if((ch2>= 65) && (ch2 <=90))
      {
            return true;
      }
      else
      {
           return false;
      }
      
   }

}; Demo obj;

int main()
{
    char ch = '\0';
    bool iret = false;

    cout<<" Enter Character\n";
    cin>>ch;

    iret = obj.CheckCapital(ch);
    if (iret == true)
    {
        cout<<" It is Capital Character\n";
    }
    else
    {
        cout<<" IT is Not Capital Character";
    }
   
   return 0;
}
