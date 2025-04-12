#include<iostream>
using namespace std;
int main()
{
	char membership; float disc1,disc2;
	int cart_value, disc3,disc4, shipping  ; bool coupen, holiday;
	cout<< "enter membership status(P for premium, R for regular, n for none): ";
	cin>> membership;
	cout << endl;
	cout << "Enter total cart value: ";
	cin >> cart_value;
	cout << endl;
	cout << "Is it Holiday? : ";
	cin >> holiday;
	cout << endl;
	cout << "Do you have coupen: ";
	cin >> coupen;
	cout << endl;
	
	if (membership == 'p' || membership == 'P') {  disc1 = 0.15;	}
	else if (membership == 'R' || membership == 'R') { disc1=0.5;	}
	else  { disc1=0;} //if user gives any other alphabet, he does not get discount.
	
	if (holiday == 1) { disc2 = 0.1; }
	else {  disc2 = 0; }	
	
	if (cart_value > 500) { disc3 = 50;	}
	else if (cart_value > 200) { disc3 = 20; 	}
	else {disc3 = 0;}
	
	int bill_after_discount = cart_value - disc1*cart_value - disc2*cart_value - disc3; 
	
	if (coupen = 1 && bill_after_discount > 100 ) { disc4 = 30;}
	else { disc4 = 0; } 
	
	int bill_after_coupen_discount = bill_after_discount - disc4;
	
	if ( bill_after_coupen_discount <= 100 )   { shipping = 0;  }
	else {shipping = 10; }
	
	int final_bill = bill_after_coupen_discount + shipping;
	cout << "Final price after discounts and shipping: " << final_bill << endl;
	
		
	
	return 0;
}
