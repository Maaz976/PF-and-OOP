 /*******************Author: Muhammad Maaz**************
  ******Purpose: To Calculate Monthly Expenses********** 
  * */


#include<iostream>
using namespace std;
int main()
{
    int daily_exp, numb_weeks , total_exp;
    cout<<"\n\nThis program will take the input for your daily expenses and no. of weeks in the month\n and will calculate your monthly expenses."<<endl;
    
    cout<<"\n\nEnter your daily expenses in dollars: ";
    cin >> daily_exp ;
    cout<<"\n\nEnter number of weeks: ";
    cin >> numb_weeks ;

    total_exp =  daily_exp * numb_weeks * 7; // Calculation formula of total expenses over the entire month;
    cout<<"\n\n\tYour total expenses are : "<< total_exp << "$\n\n"<<endl; 


    return 0;
}