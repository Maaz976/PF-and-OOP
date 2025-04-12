#include<iostream>
using namespace std;
int main()

{
    int i=1, PIN = 1234, option, deposit=0, withdraw=0, balance=0; // LET 1234 IS THE PIN CODE. Assuming Balance is 0 initially.
    i++; //Increment for 1st try. Be it Wrong or correct. Because we are not putting limit in Correct case.
    PIN:
    cout<<"Enter your PIN: ";
    cin>>PIN;



if (PIN==1234)
    {
        Menu:
            cout<<"\n\nSelect Options"<<endl;
            cout<<"1:Deposit"<<endl;
            cout<<"2:Withdraw"<<endl;
            cout<<"3:Check Balance"<<endl;
            cout<<"4:Exit"<<endl;
            cin>>option;
               switch(option)
                    {
                        case 1:
                            cout<<"Enter The amount to Deposit(Dollars): ";
                            cin>>deposit;
                            cout<<"Amount Succesfully Deposited\n\n"<<endl;
                            goto Menu;
                        case 2: 
                            cout<<"Enter the Amount to Withdraw: "; 
                            cin>>withdraw;
                            cout<<"Amount Withdrwal Successful\n\n"<<endl;

                            goto Menu;
                        case 3:
                            cout<<"Your Balance is: "<<deposit - withdraw;
                            goto Menu;
                        case 4: 
                            return 0;
                    
                    }
        }
    
    else if(PIN != 1234 && i<=3)
    {
        i++; 
        cout<<"\n\nWrong PIN entered. Try again"<<endl;
        goto PIN;
    }
    else if(PIN!=1234 && i>3) 
        cout<<"\n\nPIN code tries exceeded. Account Blocked!"<<endl;

    
    return 0;
}