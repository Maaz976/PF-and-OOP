#include<iostream>
using namespace std;
int main()
{
	float hourly_rate, hours_worked, salary, overtime, salary_after_tax;
	cout<<"Please Enter your Hourly Rate: ";
	cin>>hourly_rate;
	cout<<"Please enter your working hours in week: ";
	cin>>hours_worked;
	if (hours_worked>40)
	{
	 overtime = hours_worked-40;
	}
	
	 
	salary = (hourly_rate*40)+ (1.5*hourly_rate*overtime);
	salary_after_tax = salary - (0.2*salary);    // 20% = 0.2.
	cout<<"salary before tax is : "<<salary<<endl;
	cout<<"salary after tax is : "<< salary_after_tax<<endl;
	
	return 0;
}
