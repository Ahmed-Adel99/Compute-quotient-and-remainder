#include <iostream>
using namespace std;

int main()
{
   
    int x,y,z,n;
    cout<<"Enter dividend: \n";
    cin>>x;
    cout<<"Enter divisor: \n";
    cin>>y;
    z=x/y;
    cout<<z;
    n=x%y;
    cout<<"\n"<<n;
    return 0;
}