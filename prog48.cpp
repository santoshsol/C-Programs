#include<iostream>
using namespace std;
// Program Title : Take  character From  user  And 
// Check Digit  Or NOT 
// Date /5/02/2022/ 

class Demo
{ public: bool CheckDigit(char ch2)
 { 
    if ((ch2>='0') && (ch2<='9'))
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

    iret = obj.CheckDigit(ch);
    if (iret == true)
    {
        cout<<" It is Digit \n";
    }
    else
    {
        cout<<" it is NOT Digit\n";
    }

     return 0;
}