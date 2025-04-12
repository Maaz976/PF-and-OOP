#include<iostream>
using namespace std;
int main()                          //::::Working successfully:::://
{
    int i , j , sum = 0 ;
    cout<<"Enter the limit: "<<endl;
    cin>>j;

    for( i = 0 ; i <= j; i = i+2)
       { sum = sum + i ;}
         
    cout<<"The sum of even number from 0 to "<<j<<" is: "<<sum<<endl;


    return 0;
}