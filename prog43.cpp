#include<iostream>
using namespace std;
// Program Title : give value From user in Array Check  Number checkNumber is there or not Array using Helper Function
// Date /05/02/2022/ 
// check  Number is there or not  in Arrayy
// Program output Display  Correct                                                               
  class Demo
  { public: SerachNumber(int Arr[], int  isize, int  ino2)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt <isize; iCnt++)
        {
            if(Arr[iCnt] == ino2)  /// problem
            {
                return true; 
            }
        }
    
         return false;
    }

  };Demo obj;

  int main()
  {
       int length = 0, i = 0, ino =0;
       int *p = NULL;
       bool iret = false;
      
       cout<<" Enetr Number OF Elemnts\n";
       cin>>length;

       p = new int [length];
      
       cout<<" Enter Number\n";
       for(i = 0; i<length; i++)
       {
           cin>>p[i];
       }
  
      cout<<" Enter Serach Number\n";
      cin>>ino;

     iret = obj.SerachNumber(p, length,ino);
     if(iret == true)
     {
        cout<<" Number is there\n";
     }
     else
     {
         cout<<" Number is Not There\n ";
     }
  
      return 0 ;
  }