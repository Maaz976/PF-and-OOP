#include<iostream>

using namespace std;

int main()
{
     float num1, num2; char sign ;
     cout<<"Please enter the first number: ";
     cin>>num1;
     cout<<endl;
     cout<<"Please enter the operation you want to perform: ";
     cin>>sign ;
     cout<<"Please enter the second number: ";
     cin>>num2;
     cout<<endl;
    switch(sign)
    {

            case '+':
            cout <<"num1 + num2 = " << num1 + num2 << endl;
            break;

            case '-':
            cout <<"num1 - num2 = " << num1 - num2 << endl;
            break;

            case '*':
            cout << "num1 * num2 = "<< num1 * num2 << endl;
            break;

            case '/':
            cout << "num1 / num2 = " << num1 / num2 << endl;
            break;

    }

    return 0;
}