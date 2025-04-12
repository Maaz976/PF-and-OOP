#include<iostream>

using namespace std;

int Factorial(int);

int main()
{
    //The formula for number of paths is (m+n-2)! / ((m-1)!*(n-1)!) . Where mxn is order of matrix.
    int m,n;
    cout<<"Enter dimensions of 2D Array: ";
    cin>>m>>n;
    cout<<"There are "<<Factorial(m+n-2)/(Factorial(m-1)*Factorial(n-1))<<" Paths"<<endl;
}

int Factorial(int num)
{
    if(num==1 || num==0)
    {
        return 1;
    }

    return num*Factorial(num-1);
}