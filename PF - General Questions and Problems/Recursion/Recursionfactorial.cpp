#include<iostream>
using namespace std;

int Fact ( int n )
{
    int fact=1;
    if ( n == 0 )
    {
        return 0;
    }

    return  n+Fact(n-1);    
}

int main()
{   
    int n;
    cin>>n;
    cout<<"factorial: "<<Fact(n);
    return 0;
}