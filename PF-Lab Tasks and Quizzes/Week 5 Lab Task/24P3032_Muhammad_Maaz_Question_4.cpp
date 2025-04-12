#include <iostream>
using namespace std;
int main()
{
	int fries_cost=100,burger_cost=350,soda_cost=50,coffee_cost=150,total_bill, discount,discounted_bill;
	int fries,burgers,soda,coffee;
	cout<<"Please enter the fries ordered: ";
	cin>>fries;
	cout<<"Please enter the Burgurs ordered: ";
	cin>>burgers;
	cout<<"Please enter the soda ordered: ";
	cin>>soda;
	cout<<"Please enter the coffee ordered: ";
	cin>>coffee;
	total_bill=coffee_cost*coffee+soda_cost*soda+burger_cost*burgers+fries_cost*fries;
	if (total_bill>1000){ discount = 0.2*total_bill;}
	else discount=0;
	discounted_bill = total_bill-discount;
	cout<<"Your bill is: "<<discounted_bill;
	return 0;
}
