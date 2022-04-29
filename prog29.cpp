#include<iostream>
using namespace std;
/*
   // Program Title : take no From user and Display   Below Same Structure
   // Date /17/1/2022/ 
    
    iRow = 6

    iCol = 6
 
    $   #   #  #
    *   $   #  #
    *   *   $   #
    *   *   *   $
 */

class Demo
{
  public: int Display(int iRows, int iColum)
  {
      int i = 0;
      int j = 0;

      for(i = 1; i<=iRows; i++)
            {
                for(j = 1; j<=iColum; j++)
                {
                    if(i > j)
                    { 
                         cout<<" *\t";  
                    }
                   else if  (i < j)
                   {
                      cout<<" #\t";
                   }
                 else 
                  {
                      cout<<" $\t";
                  }
               }
                cout<<"\n";
      }
   }

}; Demo obj;

int main()
{
    int ino1 = 0;
    int ino2 = 0;
    
    cout<<" Enter Number of Colum\n";
    cin>>ino1;

    cout<<" Enter Number of Colum\n";
    cin>>ino2;

    obj.Display(ino1 ,ino2);
    return 0;
}