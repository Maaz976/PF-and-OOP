#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float BMI(float height, float weight)
{
    float u = weight/pow(height,2);
    return u;
}


int main()
{

    float height,weight;

    cout<<"\n\nWell come to My Program.\n\n It will Calculate your Body Mass Index(BMI)\n"<<endl;

    cout<<"\tEnter your Weigh(kg): ";
    cin>>weight;

    cout<<"\tEnter Your height(meters): ";
    cin>>height;

    cout<<setprecision(3)<<fixed<<BMI(height,weight); //fixed and setprecision are used in iomanip library to give exactly required decimal places.

    return 0;
}



