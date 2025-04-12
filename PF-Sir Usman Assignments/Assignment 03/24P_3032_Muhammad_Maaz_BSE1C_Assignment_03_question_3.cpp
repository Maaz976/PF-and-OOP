#include<iostream>
using namespace std;
int main()
{
    char vowel;

    cout<<"Enter a letter: ";
    cin>>vowel;

    switch(vowel)
    {
        case 'a' : 
        case 'A' :
            cout<<"Letter is vowel."<<endl; 
            break;
        case 'e': 
        case 'E' :
            cout<<"Letter is vowel."<<endl; 
            break;
        case 'i' :
        case 'I' : 
            cout<<"Letter is vowel."<<endl; 
            break;
        case 'o' :
        case 'O' : 
            cout<<"Letter is vowel."<<endl; 
            break;
        case 'u' :
        case 'U' : 
            cout<<"Letter is vowel."<<endl; 
            break;              
        default:
            cout<<"Not A vowel!"<<endl;      

    }


    return 0;
}