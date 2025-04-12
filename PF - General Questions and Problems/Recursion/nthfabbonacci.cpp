#include<iostream>
using namespace std;

int nthfab(int n)
{
    if(n<=0)
    {
        return 1;
    }
    cout<<"nthfab: "<<n<<" ";
    return nthfab (n-1) + nthfab(n-2);
}


int main()
{
    int n;
    cin>>n;
    cout<<"The nth Fabbonacci is: "<<nthfab(n-3);

    return 0;
}