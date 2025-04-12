#include<iostream>

using namespace std;

void DecimalToBinary(int *num);

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;

    DecimalToBinary(&num);

    return 0;
}

void DecimalToBinary(int *num)
{
    int temp=*num;
    int binary[10]={3,3,3,3,3,3,3,3,3,3};
    int i=0;
    cout<<"Num: ";
    while(*num>0)
    {
       
        binary[i] = *num%2;
        (*num) /= 2;
         i++;
        
    }

    for(int j=i-1;j>=0;j--)
    {
        cout<<binary[j];
    }
    // cout<<"The Binary form of "<<temp<<" is: ";
    // i=0;
    // while(binary[i]!=3)
    // {
    //     cout<<binary[i];
    // }

}