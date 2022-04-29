#include<iostream>
using namespace std;

// program Title : take no From user OR Display Avarge  Number on that Number
// using seprate  1 Helper Function
// Date /31/1/2022/
// Input :  

class Demo
{
   public:  float Average(int X , int Y, int Z)
     {
          int isum = 0;
      float iReslut = 0.f;
    
       isum = X + Y + Z;   // Collect Addition in isum

       iReslut = isum / 3;  // bhagakar kra

       return iReslut;
     }
      
 
};Demo obj;


int main()
{
 int ino1 = 0, ino2 = 0, ino3 = 0;
 float iret = 0.f;
 
 cout<<" Enter  First Number\n";
 cin>>ino1;

 cout<<" Enter Second Number\n";
 cin>>ino2;

 cout<<" Enter Thrd Number\n";
 cin>>ino3;

 
 iret = obj.Average(ino1, ino2, ino3);

 cout<<" "<<iret<<"\n";

    return 0;

}