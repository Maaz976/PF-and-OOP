#include<iostream>
using namespace std;
int main()

{
    int unitPrice, units;

    cout<<"Enter your consumed units: ";        //Taking input for number of units consumed by customer.
    cin>>units;
    cout<<endl;

    if (units>=0)       //Ensuring that non-negative input is given.
    {
        if (units<100) {   unitPrice = 5;  }
        else if (units>100 && units<200) {   unitPrice = 7;  }
        else  {   unitPrice = 10;  }
        cout<<"Your Bill is: "<<units*unitPrice<<endl; // Calculation of bill without declaration of another variable to save space.
    }
    else 
        cout<<"Invalid Number of Units! Enter only Non-Negative."<<endl;

   return 0;
}