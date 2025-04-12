#include<iostream>
#include<cmath>
using namespace std;

// void isArmstrong(int n, bool *armstrong);

int main()
{
    int n;
    cin>>n;
    int orignum=n;
    bool armstrong=true;
    // isArmstrong(n, &armstrong);
    int sum=0;
    int numDigits=1;
    while(n/10!=0)
    {
        numDigits++;
        n/=10;
    }
    cout<<"digits: "<<numDigits<<endl;

    n=orignum;
    cout<<"n: "<<n<<endl;

    int i=1;
    int power=1;
    while(i<=numDigits)
    {
        for(int j=1;j<=numDigits;j++)
        {
            power*=(orignum%10);
        }
        
        sum+=power;
        cout<<"sum: "<<sum<<endl;
        orignum/=10;
        power=1;
        i++;
    }

    

    if(n==sum)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
}

// void isArmstrong(int n, bool* armstrong)
// {
//     int sum=0;
//     int temp=n;
//     int numdigits;
//     for( numdigits = 1 ; n/10!=0 ; n/=10 , numdigits++ )
//     {
//         //loop to count number of digits.
//         // cout<<"h"<<" ";
//     }
//     n=temp;
//     cout<<endl;

//     for(int j=0;j<numdigits;j++,temp/=10)
//     {
//         sum+=pow(temp%10,numdigits);
//         // cout<<"H"<<" ";
//     }

//     if(sum!=n)
//     {
//         *armstrong=false;
//     }
// }