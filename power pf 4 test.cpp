#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    if((n&(n-1))==0)
    {
        while(n)
        {
            n=n>>1;
            count++;
        }
    }

    cout<<count<<"\n";
    if(((count-1)%2)==0)
    {
        cout<<"power of 4";
    }
    else{
        cout<<" not power of 4";
    }
}
