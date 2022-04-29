#include<iostream>
using namespace std;
// Program Title : take no From user and Display   Below Same Structure
// Date /17/1/2022/
/*
    iRow = 4
    iCol = 4
    #   #   #   #
    *   *   *   *
    #   #   #   #
    *   *   *   *
 */

class Demo
{  public: int Display(int iRows , int Colum)
   {
       int i = 0;
       int j = 0;

       for( i = 0; i <=iRows; i++)
       {
           for ( j = 0; j <=Colum; j++)
           {
               if(( i % 2 ) == 0)
               {
                   cout<<" # \t";
               }
               else
               {
                    cout<<" * \t ";
               } 
           }
             cout<<" \n";
       }
       
   }
   
};Demo obj;


int main()
{
    int ino1 = 0, ino2 = 0;

    cout<<" Enter Number OF Rows\n";
    cin>>ino1;

    cout<<" Enter Number OF Coulm \n";
    cin>>ino2;
   
   obj.Display(ino1, ino2);

   return 0;

}