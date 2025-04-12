#include <iostream>
using namespace std;
int main()
{
	char choice; //L for living room, K for kitchen, B for basement.
	int CHOICE;
	cout << "\n\t\tMenu\n\n\n\t Kitchen \n\n\t Living room\n\n\t Basement\n\n\t \n\n\t    Exit"<<endl;
	cout<<"Please Enter your choice as L for living room, K for Kitchen and B for basement: "<<endl;
	cin >> choice ;
	cout<< "Please enter an integer: ";
	cin >> CHOICE ;
	if (choice == 'L' ||choice =='l')
     {
     	if (CHOICE == 0) // WHERE 0 MEANS HE FACES WITCH
		cout<<"You have lost because there is a witch in living room!"<<endl; 
        else cout << "you have won!"<<endl;	 
	 }
	 
	else if (choice == 'K' || choice =='k')
	{
		if (CHOICE < 0) // Less than zero means there are Man eaters.
		cout<<"you have lost because there are man eaters in Kitchen!"<<endl;
	    else cout <<"you have won!"<<endl;
	 } 
	 
	else if (choice == 'B' || choice =='b')
	{
	    if (CHOICE > 0)  //Greater than zero means there is no danger.
	    cout<<"CONGRATS! You have won because there is no danger in Basement. Your Decision was right!"<<endl;
		else cout << "You have won!"<<endl;
	}
	
	else if ( choice == 'E' || choice == 'e') cout <<"Exit the game."<<endl;
	else cout << "Invalid choice!"<<endl;
	return 0;
}
