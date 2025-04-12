#include<iostream>
using namespace std ;
int main ()
{
    int balance = 1000, withdraw=0, deposit = 0, option = 0; 
    do {
    cout << "\t\tMenu: " << endl ;
    cout << "\t\t1:Deposit Money\n\t\t2:Withdraw Money\n\t\t3:Check Balance\n\t\t4:Exit" << endl ;
    cout << "Select an option(As per number): " ;
    cin >> option;
        if ( option == 1)
        {
            cout << "Enter Amount to depost: " ;    
            cin >> deposit ;
             while ( deposit <=0 )
             {
                cout << "Invalid Amount" << endl ;
                cout << "Enter Amount to depost: " ;
                cin >> deposit ;

                continue ;
             }
             if ( deposit > 0 )
             { 
                balance = balance + deposit;
                cout << "Deposit Successful! New Balance = " << balance <<endl;
                continue;  
             }  
        }
        else if(option == 2)
        {
            cout << "Enter Withdraw amount: " ;
            cin >> withdraw;
               while ( withdraw < 0 || withdraw > balance ) 
             {
                cout << "Invalid Amount" << endl;
                cout << "Enter Amount to withdraw: " ;
                cin >> withdraw;

                continue;
             }
                if ( withdraw >= 0 )
                {
                    balance = balance - withdraw;
                    cout << "Withdraw Successful! New Balance = " << balance << endl ;
                    continue ;
                }
        }
        else if ( option == 3)
        {
            cout << "Current balance is: " << balance << endl;
            continue ;
        }
        else if ( option == 4 )
        {
            cout << "Program Exit" << endl ;
            break ;
        }
        else {
            cout << "Invalid Input" << endl;
            continue ;
        }
        

    } while ( option != 4 ) ;



}