#include<iostream>
using namespace std;
int main()
{
    int num1, num2; char oper;

    cout<< "Enter the 1st number: ";
    cin>>num1;
    cout<< "Enter the 2nt number: ";
    cin>>num2;
    cout<<"Enter the operation: ";
    cin>>oper;
    
    switch(oper)
    {
        case '+': 
            cout<<"The sum is: "<<num1+num2<<endl;
            break;
        case '-': 
            cout<<"The difference is: "<<num1-num2<<endl;
            break;
        case '*': 
            cout<<"The product is: "<<num1*num2<<endl;
            break;
        case '/': 
            if(num2!=0)
            {
                cout<<"The quotient is: "<<num1/num2<<endl;
                break;
            }
            else
                cout<<"Invalid input"<<endl;
        case '%': 
            cout<<"The remainder is: "<<num1%num2<<endl;
            break;
        default: 
            cout<<"Invalid Operation"<<endl;

    }

    return 0;
}