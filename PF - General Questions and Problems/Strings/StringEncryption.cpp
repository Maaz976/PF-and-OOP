#include<iostream>
#include<string>

using namespace std;

char encrypter(char letter, int position);

int main()
{
    string original;
    cout<<"Enter String to Encode: ";
    cin>>original;


    cout<<"The Encrypted String is: "<<endl;
    for(int i=0;i<original.length();i++)
    {
        cout<<encrypter(original[i], i);
    }
    
    return 0;
}

char encrypter(char letter, int position)
{
    if(position%2==0)
    {
        switch(letter)
        {
            case 'z':   return 'b'; break;
            case 'Z':   return 'B'; break;
            case 'y':   return 'a'; break;
            case 'Y':   return 'A'; break;
            default: return letter+2;
        }
    }

    else if(position%2!=0)
    {
        switch(letter)
        {
            case 'a':   return 'y'; break;
            case 'A':   return 'Y'; break;
            case 'b':   return 'z'; break;
            case 'B':   return 'Z'; break;
            default: return letter-2;
        }
    }
}