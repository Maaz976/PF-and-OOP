#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,k; char oper; char d;
   do{ 
    
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter the operation as +,-,*,^,s(for square root),%"<<endl;
    cin>>oper;
    
    switch(oper)
    {
        case '+':
            cout<< "Sum is: "<< a+b <<endl; break;
        case '-':
            cout<<"Subtraction is: "<< a-b <<endl; break;
        case '*':
            cout<< "Product is: "<< a*b <<endl; break;
        case '/':
            cout<<" Division is: "<< a/b <<endl; break;
        case '^':
            cout<< " Exponentiation is: "<< pow(a,b) <<endl; break;
        case 's':
            cout<<" Square root is: "<< pow(a,0.5) <<","<< pow(b,0.5) <<endl; break;   
        case '%':
            cout<< " Remainder is: "<< a%b <<endl; break;
    }

    cout<<"Do you want to continue(y for yes): "<<endl;
    cin>>d;
    
    
    }while( d== 'y'||d=='Y');


    return 0;
}