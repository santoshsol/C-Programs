#include<iostream>
using namespace std;
// Date /31/1/2022
// Program Title:: Take any Number From user and Display * on Same Number

void Display(int ino2)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <=ino2; iCnt++)
    {
        cout<<" *\t ";
    }
    
}

int main()
{
    int ino1 = 0;

    cout<<" Enter Number\n";
    cin>>ino1;

    Display(ino1);

    return 0;
}
