#include<iostream>

using namespace std;

int main()

{
    int i = 0, j = 0, k = 0 , num, rev = 0, orignum;

    cout<<"Enter the number to check if it is Palindrome not: ";
    cin>>num;
    orignum = num;
    while(num>0)
    {
        k = num % 10 ;
        rev = (rev * 10) + k ;
        num = num / 10 ;

    }

        if(orignum==rev)    cout<<"Palindrome"<<endl;
        else cout << " not a palindrome" <<endl;
        cout<<0%10<<endl;

       
    return 0;
}