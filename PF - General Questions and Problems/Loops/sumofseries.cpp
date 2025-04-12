
//This code gives the sumn of the series, 1/1! + 2/2! + 3/3! ...

#include<iostream>
#include<iomanip>

using namespace std;

float sumseries(int);
int Factorial(int);

int main()


{
    cout<<endl;
    cout<<"Enter number of terms\nof series 1/1! + 2/2! + 3/3! ...\n you want to sum up: ";
    int terms;
    cin>>terms;

    cout<<setprecision(3)<<fixed<<showpoint;

    cout<<"The sum upto n terms is: "<<sumseries(terms)<<endl;
    cout<<endl;
    return 0;
}

int Factorial(int factorial)
{
    int nfactorial=1;
    
    // cout<<setprecision(3)<<fixed<<showpoint;

    while(factorial>0)
    {
        nfactorial*=factorial;
        factorial--;
        // cout<<"factorial "<<factorial<<" ="<<nfactorial<<endl;
    }

    return nfactorial;
}

float sumseries(int terms)
{
    float sum=0;
    int i=1;
    
    // cout<<setprecision(3)<<fixed<<showpoint;-

    while(i<=terms)
    {
        sum+=float(i)/Factorial(i);
        i++;
        // cout<<"sum "<<i <<": "<<sum<<endl;
    }

    return sum;
}