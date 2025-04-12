#include<iostream>

using namespace std;

int main()

{
    int quantity1=0, quantity2=0, quantity3=0,items=0, bill=0; bool yesno;
    char type;

    Menu:
    cout<<"\nWell Come to our Restaurant!"<<endl;   //If we use switch for food choice, we cannot handle case where he orders many and different food.

    cout<<"\n\nDo you want to order a Pizza(0 for no, 1 for yes): ";
    cin>>yesno;

        if(yesno==1)
            { 
             cout<<"\n\nPlease enter the quantity: "; 
             cin>>quantity1;
            }

    cout<<"\n\nDo you want to order a Burger(0 for no, 1 for yes): ";
    cin>>yesno;
        if(yesno==1)
            { 
             cout<<"\n\nPlease enter the quantity: "; 
             cin>>quantity2;
            }

    cout<<"\n\nDo you want to order a Sandwich(0 for no, 1 for yes): ";
    cin>>yesno;
        if(yesno==1)
            { 
             cout<<"\n\nPlease enter the quantity: "; 
             cin>>quantity3;
            }

    bill = 500*quantity1 + 200*quantity2 + 100*quantity3; 

            if(bill>1000)
            {
                bill = bill - 0.1*bill;   // because 10% = 0.1
            }
    items = quantity1 + quantity2 + quantity3;
            if(items>5)
            {
                bill = bill - 100;            //Flat Rs 100 discount for this case.
            }
    
    cout<<"\n\nAre you ordering in Peak Hours(0 for no, 1 for yes): ";
    cin>>yesno;
        switch(yesno)       //Switch accepts bool, although with warning.
            {
                case 1:
                    bill = bill + 0.15*bill;    //15% = 0.15.
                    break;
                case 0:
                    bill = bill;
                    break;
                default : 
                    cout<<"\n\n****Invalid input****"<<endl;
            }

    cout<<"\n\nYour Bill is: "<<bill<<" Rupees"<<"\n\n***Thanks for Your Order***\n\n"<<endl;

    return 0;
}


