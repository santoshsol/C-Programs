#include<iostream>
using namespace std;
// program Title Check Number is CheckPallindrome or not
// Pallindrome Number is 75257, 121,1234321
// Date /9/1/2022/
class Demo
{
      public: bool CheckPallindrome(int ino2)
      {
         int iDigit = 0, Rev = 0;
         int Temp = ino2;

         while(ino2>0)
         {
            iDigit = ino2%10;
            Rev = (Rev *10) + iDigit;
            ino2 = ino2 / 10;
         }
         if(Temp == Rev)    // Comper Number 
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
    bool iret = false;
    int ino1 = 0;
    

    cout<<" Enter Number\n";
    cin>>ino1;

    iret = obj.CheckPallindrome(ino1);
    if (iret  == true)
    {
        cout<<" It is Pallindrome\n";
    }
    else
    {
        cout<<" It is Not Pallindrome\n";
    }

    return 0;
}

