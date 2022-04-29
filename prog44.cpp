#include<iostream>
using namespace std;

// Program Title: give value From user in Array Check  Number checkNumber is ther which index not Array using Helper Function
// Date /5/02/22/                                                         
// serach  Number is there or not  in Arrayy
// Program Not give Correct Reslut 
  class Demo
  {  public: int FirstOccurance(int Arr[], int isize, int ino1 )
    {
        int iCnt = 0;
        int  index =-1;
        for(iCnt = 0; iCnt<isize; iCnt++)
        {
            if(Arr[iCnt] == ino1)
            {
                 index = iCnt;
            }  
        }
        
        return index;
   }
    
  };Demo obj;


int main()
{
    int length = 0, i = 0, ino2 = 0;
    int *p = NULL;
    bool iret = false;
    cout<<" Enter Number OF Elemnts\n";
    cin>>length;

    p = new int[length];

    cout<<" Enter Elemnts\n";
    
    for(i = 0; i<length; i++)
    {
        cin>>p[i];
    }
  
     cout<<" Enter Serach Number\n";
     cin>>ino2;
    
    iret = obj.FirstOccurance(p, length, ino2);
    if (iret ==-1)
    {
        cout<<" There is no Such Number\n";
    }
    else
    {
        cout<<" Number is there at index "<<iret<<"\n";
    }
    
    return 0;
}