/*
    Author: Muhammad Maaz
Description: This Program Gives The prime numbers between 2 given numbers.

*/



#include<iostream>
using namespace std;

void primes(int low, int high);
int main()
{
    int low, high;
    cout<<"Enter the lower and upper limit: ";
    cin>>low>>high;

    primes(low,high);
    return 0;
}

void primes(int low, int high)
{
    
    for(low;low<=high;low++)
    {
        int factors=0;
        for(int i=1;i<=low;i++)
        {
            if(low%i==0)
            {
                factors++;
            }
            
        }
        if(factors==2)
            {
                cout<<low<<" ";
            }
    } 
    
}

