#include<iostream>

using namespace std;

int main()

{
    int type,age;

    cout<<"\n\n\tAirline Ticket Booking\n\n\t"<<endl;
    cout<<"Please select one:"<<endl;
    cout<<"1:Economy Class\n2:Business Class\n3:First Class "<<endl;
    cin>>type;

        switch(type)
        {
            case 1: 
                cout<<"\nEconomy Class Ticket Price: 5000 PKR"<<endl;
                cout<<"\nEnter your age: ";
                cin>>age;
                    if(age<12 && age>0)
                        {
                            cout<<"\n\nAfter 50% discount, Your bill is: 2500 PKR"<<endl;
                        }
                    else if(age<60 && age>12)
                        {
                            cout<<"\n\nNo discounts Available. Sorry!"<<endl;
                        }
                    else if(age>60)
                        {
                            cout<<"\n\nAfter 20% discount, your bill is: 4000 PKR"<<endl;
                        }

                break;
            case 2: 
                cout<<"Business Class Ticket Price: 12000 Rupees"<<endl;
                cout<<"\nEnter your age: ";
                cin>>age;
                    if(age<12 && age>0)
                        {
                            cout<<"\n\nAfter 50% discount, Your bill is: 6000 PKR"<<endl;
                        }
                    else if(age<60 && age>12)
                        {
                            cout<<"\n\nNo discounts Available. Sorry!"<<endl;
                        }
                    else if(age>60)
                        {
                            cout<<"\n\nAfter 20% discount, your bill is: 9600 PKR"<<endl;
                        }
                break;
            case 3: 
                cout<<"First Class Ticket Price: 25000 Rupees"<<endl;
                cout<<"\nEnter your age: ";
                cin>>age;
                    if(age<12 && age>0)
                        {
                            cout<<"\n\nAfter 50% discount, Your bill is: 12500 PKR"<<endl;
                        }
                    else if(age<60 && age>12)
                        {
                            cout<<"\n\nNo discounts Available. Sorry!"<<endl;
                        }
                    else if(age>60)
                        {
                            cout<<"\n\nAfter 20% discount, your bill is: 20000 PKR"<<endl;
                        }                
                break;
            default: 
                cout<<"Invalid Input"<<endl;
        }



    return 0;
}