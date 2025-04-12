#include<iostream>
#include<iomanip>
using namespace std;

void temp_converter(float temp)
{
   
    float fah_temp = (9.0/5.0)*temp + 32;
    cout<<setprecision(3)<<fah_temp;
}

int main()
{
    float temp;
    cout<<"Enter Temperature in Celsius: ";
    cin>>temp;
    temp_converter(temp);
    return 0;
}