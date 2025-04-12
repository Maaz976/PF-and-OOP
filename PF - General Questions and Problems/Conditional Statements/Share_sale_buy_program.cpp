/*
****************************Author Muhammad Maaz*************************************
*********Purpose: To find amount invested, amount received, and profit or loss.*******/

#include <iostream>
using namespace std;
#define comission 0.015
int main()
{   
    float shares_sold, purchase_price_for_each, selling_price;

    cout<<"\n\n*****This program is designed to find your gain or loss and the\n amount received after all the sales.******"<<endl;
    cout<<"\n\nPlease enter the no. of shares sold($): ";
    cin>>shares_sold;
    cout<<"\n\nPlease enter the purchase price per share: ";
    cin>>purchase_price_for_each;
    cout<<"\n\nPlease enter the selling price per share: ";
    cin>>selling_price;

    float investment = shares_sold*purchase_price_for_each;
    float refund = shares_sold*selling_price;
    float service_charges = 0.015*refund + 0.015*investment;

    float amount_gained_lost = refund - (investment + service_charges);
    

    cout<<"\nYou had invested: "<<investment<<endl;
    cout<<"\nThe service charges applied: "<<service_charges<<endl;
    if (amount_gained_lost>=0) cout<<"\nThe Profit you have got: "<<amount_gained_lost<<endl;
    else cout<<"\nYour loss is: "<<amount_gained_lost*(-1); 
    cout<<"\n\n"<<endl;
    return 0;
}