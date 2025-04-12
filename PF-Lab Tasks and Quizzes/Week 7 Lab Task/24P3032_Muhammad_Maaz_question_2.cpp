#include <iostream>
using namespace std;
int main()
{
	char room_type, add_services ; 
	int nights , cost_per_night, add_charges, bill_1, bill_2, bill_3;  
	float disc_1,disc_2;
	bool loyalty;
	cout << "Enter room type\n s for single\n d for double\n t for suite:  "<<endl;
	cin>> room_type;
	cout<<"Are you a loyalty program member: ";
	cin>> loyalty;
	cout<<"Enter number of nights: "<<endl;
	cin>>nights;
	cout<< "Choose additional services if any(z for spa, b for breakfast, n for none): ";
	cin>>add_services;
	
	if (room_type=='s') {cost_per_night = 50;	}
	else if (room_type=='d') {cost_per_night = 90; }
	else if (room_type=='t') {cost_per_night = 150; }
	else cout<<"invalid input"<<endl;
	
	
	if (nights > 7) disc_1=0.1;
	else disc_1 = 0;
	
	if (loyalty==true) disc_2=0.05;
	else disc_2==0;
	
	if (add_services== 'z' ) add_charges=nights*30;
	else if ( add_services == 'b' ) add_charges=nights*10;
	else add_charges=0;
	
	bill_1 = cost_per_night*nights + add_charges; //We are to give discount on total bill, which means including additional; charges.
	
	bill_2 = bill_1 - disc_1 * bill_1;
	bill_3 = bill_2 - disc_2 * bill_2;
	
	cout<<"Your final bill is: "<< bill_3 <<endl;		
	
	return 0;
	}
		
	
	
	

