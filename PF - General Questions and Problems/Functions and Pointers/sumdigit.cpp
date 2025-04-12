#include<iostream>
using namespace std;

int sumdigit(int n)
{
    
    if(n<10)
    {
        // cout<<"m: "<<n<<" ";
        return n;
    }
    // cout<<n<<" ";
    return n%10 + sumdigit(n/10);
}


int main()
{
    int n;
    cout << "n : " ;
    cin >> n ;

    cout << "Sum of digits is: " << sumdigit(n) << endl ;
    
    return 0;
}
