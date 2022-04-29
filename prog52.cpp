#include<iostream>
using namespace std;
// program Title: Take Chracter From user and Count Charactr in String small character
// Date /25/1/2022/ 
// printf in  %s use printf the String
// using Helper Function

// Hello
// 4

// HELlo
// 2

// HELLO

      char CountSmall(char Str[],char size)
     {
        int iCnt = 0;

        while(Str !='\0')
        {
           if((*Str>='a') && (*Str<='z'))
           {
               iCnt++; // character ++
           }
          Str++;
        }  
          return iCnt;
     }

int main()
{
   char length = '\0';
   char *p = NULL;
   int iret = 0, i = 0;

   cout<<" Enter Character\n";
   cin>>length;

    p = new char[length];
   
   cout<<" Enter Character\n";
   for(i = 0; i<length; i++)
   {
      cin>>p[i];
   }
   
   
   iret = CountSmall(p, length);

   cout<<" Small Character Are >>"<<iret<<"\n";

   return 0;
}