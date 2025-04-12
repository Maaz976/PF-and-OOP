#include<iostream>

using namespace std;

void Print(int n,int current)
{
    if(n==0)
    {
        return ;
    }
    cout<<current<<" ";
    if(n%2==0)
    {
        Print(n-1,current-5);
    }
    else  
    {
         Print(n-1,current+10);
    }

}

int main()
{
    int n;
    cout<<"Enter Number of terms you want: ";
    cin>>n;

    Print(n,100);
    return 0;
}