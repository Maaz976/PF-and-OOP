#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year; 
    cout<<endl;
    if (year>=0)   //Ensuring that only positive value is given by user.
    {
    if (year%4 == 0 && year%400!=0)     cout<<"Leap year"<<endl; //Leap year is divisible by 4 but not by 400. Others are not.
    else    cout<<"Not a leap year"<<endl;
    }
    else 
        cout<<"Invalid Input"<<endl;



    return 0;
}
