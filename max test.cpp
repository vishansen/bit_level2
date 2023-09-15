#include <iostream>

using namespace std;

int main()
{
  int a,b;
  cin>>a>>b;
 int diff;
  diff=a-b;
  if((diff>>31)&1)
  {
      cout<<"b is greater then a";
  }
  else{
      cout<<" a is greater then b";
  }
    
}
