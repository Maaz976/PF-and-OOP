#include<iostream>
#include<cmath>
using namespace std;

void absolute(int *num);
int main()
{
    cout<<"Enter the number: ";
    int num;
    cin>>num;

    absolute(&num);

    cout<<num;

    return 0;
}

void absolute(int *num)
{
    
    if(*num<0)
    {
        *num *= *num;
        *num = sqrt(*num);
    }

    
}