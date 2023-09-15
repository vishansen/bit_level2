#include <iostream>

using namespace std;

int main()
{  
    int i ;
   
   for(int i=1 ; i<=5 ;i++)
   { char ch='a';
       for(int j=1 ; j<=5 ;j++)
       {
           if(j>=1 && j<=4-i+1)
           {
               cout<<ch;
                ch++;
           }
           else{
               cout<<" ";
           }
          
       }
       cout<<endl;
   }
   
    return 0;
}
