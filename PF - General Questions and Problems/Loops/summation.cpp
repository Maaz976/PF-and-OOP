
/*
    Author: Muhammad Maaz
    Description: This Program Calculates the sum of the series,  e^(x) = 1+ x^(1)/1! + x^(2)/2! + x^(3)/3! + ..... Upto n terms,
    where x and n are entered by user.
*/



#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n,x;
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"Enter n and x: ";
    cin>>n>>x;
    float i = 1,sum = 0;
    do
    {
        float j=1;
        float power = 1;
        do
        {
            power *= x;
            j++;
        } while (j<=i);
        
        float factorial = 1;
        float k=i;
        do
        {
            factorial *= k;
            k--;
        } while (k>0);
        

        cout<<"pow: "<<power<<" factorial: "<<factorial<<endl;
        sum += power/factorial;

        i++;
    } while (i<=n);

    cout<<sum<<endl;
    

    return 0;
}