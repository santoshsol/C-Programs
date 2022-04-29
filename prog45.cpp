#include<iostream>
using namespace std;
// Program Title : Take  character From  user  And Check Capital Character 
// Date /5/02/2022/ 

class Demo
{   public: bool CheckCapital(char ch2)
     {
        
            if ((ch2>='A') && (ch2<='Z'))
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
       cout<<" It Is Capital Character\n";
  }
  else
  {
       cout<<" It Is NoT Capital Character\n";
  }

    return 0;
}