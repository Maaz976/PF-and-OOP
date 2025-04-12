#include<iostream>
#include<iomanip>
using namespace std;


void time_convert()
{
    int hours,mins,sec,given_sec;
    cout<<"Enter total Seconds: ";
    cin>>given_sec;
    hours = given_sec / 3600;   //There are 3600 seconds in one hour.
    mins = (given_sec%3600)/60;     
    sec = (given_sec%3600)%60;
    cout<<setw(2)<<setfill('0')<<hours<<":"<<setw(2)<<setfill('0')<<mins<<":"<<setw(2)<<setfill('0')<<sec;

}

int main()
{
    time_convert();
    return 0;
}