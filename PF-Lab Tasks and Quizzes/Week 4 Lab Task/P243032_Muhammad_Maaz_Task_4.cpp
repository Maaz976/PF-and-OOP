#include<iostream>
using namespace std;
int main()
{
	float Fahrenheit, Celsius;
	
	cout<<"Enter the temperature in Degree Celsius : "<<endl;
	cin>>Celsius;
	
	Fahrenheit = (Celsius*9/5) + 32;
	cout<<Fahrenheit<<endl;
	
	return 0;
}
