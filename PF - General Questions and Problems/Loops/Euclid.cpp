#include<iostream>
using namespace std; 

int GCD(int,int);

int main()
{
    int num1, num2;

    cout<<"Enter Two numbers: "; 
    cin>>num1>>num2;

    cout<<"The GCD is: "<<GCD(num1,num2)<<endl;

    return 0;
}

int GCD(int num1, int num2)
{
    int gcd=0;
    while(num1!=0 && num2!=0)
    {

        if(num1>num2)
        {
            
            gcd=num2;
            num1=num1%num2;
            
        }
        else 
        {
           
            gcd=num1;
            num2=num2%num1;
        }

    }

    
    return gcd;
}






