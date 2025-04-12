#include<iostream>
using namespace std;

void square(int num);
void cube(int num);


int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    square(num);
    cube(num);

    return 0;
}

void square(int num)
{
    cout<< num*num<<endl;
}

void cube(int num)
{
    cout<<num*num*num;
}