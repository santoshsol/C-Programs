#include<iostream>
using namespace std;
#include<stdbool.h>
// program Title : Take Chracter From user and CheckPallindrome that Chracter in String   
// CheckPallindrome String
// Date /3/2/2022/ 
// using Helper Function
// using Flag 
class Demo
{   public:bool CheckPallindrome (char str[])
    {
                    char *end = NULL;
                    bool flag = true;

                     end = str;
                   
                    while(*end !='\0')
                    {
                       end++;
                    }
                    end--;

                    while(str <end)
                    {
                        if (*str != * end)
                        {
                             flag = false;
                             break;
                        }
                      str++;
                      end--;  
                    }
             return flag;
    } 
};Demo obj;




int main()
{
    char Arr[20];
    bool iret = false;

    cout<<"Enter String \n";
    scanf("%[^'\n']s",Arr);

    iret = obj.CheckPallindrome(Arr);
     if(iret == true)
     {
        cout<<"  iT is Pallindrome String \n" ;

     }
     else
     {
         cout<<" iT is Not Pallindrome String\n" ;
     }
     
     return 0;

}