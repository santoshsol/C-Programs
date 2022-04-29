#include<iostream>
using namespace std;
// Program Title: Check Even Number

 
 class Demo
 {  public: bool CheckEven(int ino2)
  {

           if((ino2 %2) == 0 )
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
    int ino1 = 0;
    bool iret = false;
    cout<<" Enter Number\n";
    cin>>ino1;

    iret = obj.CheckEven(ino1);
    
   if(iret == true)
   {
       cout<<" It is Even Number\n";
   }
   else
   {
       cout<<" It is Not Even Number\n";
   }
     
 }