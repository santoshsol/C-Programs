#include<iostream>
using namespace std;

//  program Title > take Number From user return Reminder whole Number
//  Mod  operator it give  remindr if we Divide any Number
//  Date /30/ 1/ 2022/

class Demo
{
    public : void Display(int ino2)
    {
        int idgit = 0;

        while (ino2>0)
        {
             idgit = ino2%10;
             cout<<" "<<idgit<<"\n";
             ino2=ino2/10;
        }   
    }
    
}; Demo obj;

int main()
{
    int ino1 = 0;

    cout<<" Enter Number\n";
    cin>>ino1;

    obj.Display(ino1);


}