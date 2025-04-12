#include<iostream>
using namespace std;
int main()
{
    int primes=0, array[10]; 
    int i, temp, j, k;
    for(i=0;i<10;i++)
    {
        cout<<"Enter a number : ";
        cin>>array[i];
    }
    cout<<endl;
    for(i=0;i<10;i++)
    {
        temp=array[i];  
         k=0;   //For each iteration--->each number of Array, k starts from 0.
        for(j=1;j<=temp;j++)
        {
            if (temp%j == 0)
            {
                k++;  //This will count factors of that number of array.
            }
            
        }
        
      if(k==2)  //If a number has 2 factors it's prime. Otherwise not.
        {
            cout<<array[i]<<" is a prime."<<endl;
            primes++;   //Number of primes incremented.
        }

    }

    cout<<"The number of primes is: "<<primes;

    return 0;
}