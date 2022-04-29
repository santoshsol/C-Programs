#include<iostream>
using namespace std;
// Program Title : take no From user and Display  Rows and Colum that Number
// 4 rows   > *    *   *    *  4 < colum
//            *    *   *    *
//            *    *   *    *
//            *    *   *    *
// using seprate  1 Helper Function
// Date /1/2/2022/

class Demo
{
   public: int Display(int irows , int iColum)
   {  int i = 0;
      int j = 0;
     for ( i = 1; i<= irows; i++)
     {
         for ( j = 1; j <=iColum; j++)
         {
            cout<<" *\t";
         }
         cout<<" \n ";
     }
     
   }

}; Demo obj;


int main()
{
    int ino1 = 0, ino2 = 0;

    cout<<" Enter Number  of Rows\n";
    cin>>ino1;

    cout<<" Enter Number of Colum\n";
    cin>>ino2;

    obj.Display(ino1 , ino2);
    return 0;
}
