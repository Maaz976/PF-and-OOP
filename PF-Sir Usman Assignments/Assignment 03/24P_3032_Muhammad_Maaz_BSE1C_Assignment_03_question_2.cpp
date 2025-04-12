#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;

    cout<<"Enter 1st number: ";     // Taking input for each number.
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    cout<<"Enter 3rd number: ";
    cin>>num3;

    if(num1>num2 && num1>num3)  cout<<"The greatest number is: "<<num1<<endl; //Writing logic for each case separately.
    else if(num2>num1 && num2>num3)  cout<<"The greatest number is: "<<num2<<endl;
    else if(num3>num2 && num3>num2)  cout<<"The greatest number is: "<<num3<<endl;
    else if(num1==num2 && num2==num3)   cout<<"All are equal."<<endl;
    else if(num1<num2 && num2==num3)   cout<<"Greatest number is: "<<num3<<endl;  // To cover the case where two are same. but 3rd is different.
    

    return 0;
}