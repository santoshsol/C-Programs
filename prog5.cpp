#include<iostream>
using namespace std;
//  program Titale >Mod  operator it give  remindr if we Divide any Number
//  Date /8/ 1/ 2022/

void  Display()
{
    int ino1 = 1275;
    int idgit = 0;


    idgit = ino1%10;
    cout<<" "<<idgit<<"\n";
    ino1 = ino1 /10;

    idgit = ino1%10;
    cout<<" "<<idgit<<"\n";
    ino1 = ino1/10;

    idgit = ino1%10;
    cout<<" "<<idgit<<"\n";
    ino1 = ino1/10;

    idgit = ino1%10;
    cout<<" "<<idgit<<"\n";
    ino1 = ino1/10;


}


int main()
{

  Display();

 return 0;
}