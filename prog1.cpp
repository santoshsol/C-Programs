
#include <iostream>
using namespace std;
// program Title take Number From user and convert this Number reverse order using for loop
// exmple give number 7 
// Display ... 7654321
// Date 29/1/2022
 
 void Display(int ino2)
  {
    int iCnt = 0, i  =0;
    
    for ( i = ino2; i>0; i--)
    {
       cout<< i <<" \t";
        
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

 
