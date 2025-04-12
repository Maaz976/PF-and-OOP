#include <iostream>
using namespace std;
int main()
{
	int temperature;
	
	cout<< "Please enter the room temperature: " ;
	cin >> temperature ;   //Taking the input from user.
	
	if (temperature<=18) cout<<"Heater Turned on"<<endl; //for low temperature.
	
	else if (temperature>=26) cout<<"AC Turned on"<<endl;  //for high temperature.
	
	else  cout<<"No Action needed"<<endl; //for moderate temperature.
	
	return 0;
}
