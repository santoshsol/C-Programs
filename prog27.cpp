#include<iostream>
using namespace std;
// Program Title take no From user and Display   Below Same Structure 
//    iRow = 4
//    iCol = 4
 
//   $   *   *   *
 
//    *   $   *   *
 
//    *   *   $   *
 
//    *    *   *   $
                      
// using seprate  1 Helper Function
// Date /1/1/2022/

class Demo
{
    public: int Display(int iRows , int iColum)
    {
       int i = 0;
       int j = 0;

       for (i = 1; i <=iRows; i++)
       {
           for ( j = 1; j<=iColum; j++)
           {
               if (i == j)
               {
                    cout<<" $\t ";
               }
               else
              {
                  cout<<" *\t";
              }
           }
            cout<<" \n";    
       }

    }

};Demo obj;

int main()
{
    int ino1 = 0,  ino2= 0;

    cout<<" Enter Number of Colum\n";
    cin>>ino1;

    cout<<" Enter Second Number\n";
    cin>>ino2;

    obj.Display(ino1,ino2);
    return 0 ;
}
