#include<iostream>
using namespace std;
// program Tital : Take Chracter From user and Convert  to Capital TO Small
// Date /05/02/2022/ 

class Demo
{  public: char CapitalToSmall(char ch2)
  {
    if((ch2>='A') && (ch2<='Z'))
        {
            return ch2 +32; 
        }
 }
    
};Demo obj;

int main()
{
    char ch ='\0';
    char ch3 = '\0';
  cout<<" Enter Character\n";
  cin>>ch;

 ch3 = obj.CapitalToSmall(ch);

   cout<<" CapitalToSmall "<< ch3 <<"\n";
  return 0 ;
}