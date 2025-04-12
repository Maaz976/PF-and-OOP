#include<iostream>
using namespace std;
int main()
{
	float Input;                 //Capital I used.
	cout << "Please enter the number, you want the ASCII value of: ";
	cin >> Input;
	if (Input>0){
		cout<<"The ASCII code is: "<<char(Input)<<endl;
	}
	else cout << "The number is: " << Input << " Which does not have any ASCII value: "<<endl;
	return 0;	
}
