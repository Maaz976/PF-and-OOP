#include<iostream>
#include<cmath>
using namespace std;
const double SLICEAREA = 14.125;

int numb_slices()
{
    int diameter;
    cout<<"Enter the Diameter of Pizza(inches): ";
    cin>>diameter;
    float area = 3.14*pow((diameter*0.5),2);
    cout<<"The Number of Slices of Pizza with diameter "<<diameter<<" is: "<<static_cast<int>(area/SLICEAREA);
    return int(area/SLICEAREA);
}
int main()
{
   numb_slices();

    return 0;
}