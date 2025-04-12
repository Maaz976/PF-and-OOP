#include<iostream>
using namespace std;
int main()
{
    int month;  

    cout<<"Enter the month number: ";   //Prompting the user to input the month as an integer.
    cin>>month;
    cout<<endl;

    switch(month)
    {
        case 1:         //Use of switch statement to find the season for each month as directed.
        case 2:
        case 12:
            cout<<"Winter season"<<endl;
            break;
        case 3:
        case 4:
        case 5:
            cout<<"Spring Season"<<endl;
            break;
        case 6:
        case 7:
        case 8:
            cout<<"Summer Season"<<endl;
            break;
        case 9:
        case 10:
        case 11:
            cout<<"Autumn Season"<<endl;
            break;
        default: 
            cout<<"Invalid month number"<<endl;    // In case user gives negative or month > 12.



    }


    return 0;
}