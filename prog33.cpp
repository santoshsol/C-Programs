#include<iostream>
using namespace std;
// Program Title : give value From user in Array Calculte Avarage that value using Helper Function
// Date /3/02/2022/ 
// calculte Avarage  total Number in Array

class Demo
{  public: float Avrage(int Brr[], int size)
  {
      int isum =  0, i = 0;
      float ireslut = 0.f;

      for(i = 0; i<size; i++)
      {
         isum = isum + Brr[i];
      }
      
      ireslut = isum/size;
      return ireslut;
   }
     
}; Demo obj;


int main()
{
    int *p =NULL;
    int iCnt = 0, ilength =0;
    float iret = 0.f;

    cout<<" Enter Number OF Elemnts\n";
    cin>>ilength;

    p = new int[ilength];

   cout<<"Enter Elemnts\n";
   for ( iCnt  = 0; iCnt <ilength; iCnt++)
   {
      cin>>p[iCnt];
   }
  
   iret = obj.Avrage(p,ilength);

   cout<<" Avrage is "<<iret<<" \n";
}
