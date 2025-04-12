#include<iostream>
#include<cmath>
#include<iomanip>


using namespace std;

float interest5(float balance);
float interest12(float balance);
float compinterest(float years,float comprate, float balance);

int main()
{
    float balance;
    cout<<"Enter Saving Account balance: ";
    cin>>balance;
    cout<<fixed<<showpoint<<setprecision(3)<<endl;
    cout<<"For a fixed rate of 5%, Interest for 1 year is: "<<interest5(balance)<<endl;
    cout<<"For fixed interest of 12%, Interest for 1 Year is: "<<interest12(balance)<<endl;
    float years, comprate;
    cout<<"Enter the years: ";
    cin>>years;
    cout<<"Enter the interest rate: ";
    cin>>comprate;
    cout<<endl<<"For "<<int(years)<<" years the compund interest with "<< comprate <<" rate is: "<<compinterest(years,comprate,balance);
    
    return 0;
}

float interest5(float balance)
{
    return 0.05*balance;
}

float interest12(float balance)
{
    return 0.12*balance;
}

float compinterest(float years,float comprate,float balance)
{
    float interest = 0;
    
    for(int i=1;i<=years;i++)
    {
        interest += (pow(comprate/100,years*12)*balance - balance);
        cout<<interest<<" ";
    }

    return interest;
}

