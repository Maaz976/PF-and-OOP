#include<iostream>
#include<string>

using namespace std;

int ispalindrome(string str,int length)
{
    for(int i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-i-1] )   //If a single mismatch found, it will directly return 1. 
        {
            return 1;
        }
    }

    return 0;
}



int main()
{
    string str;
    cout<<"Enter the string to check if it's a palindrome: "<<endl;
    getline(cin,str);

    for(int i=0;i<str.length();i++)   //This loop will remove anything in between letters to ensure only letters are compared and decision is based on that.
    {
        if(!(str[i]>=65 && str[i]<=90) && !(str[i]>=97 && str[i]<=122)  )
        {
            str.erase(i,1);
            --i;
        }
        str[i]=tolower(str[i]);
    }

    
    

    
    int size = str.length();


    // Decision based on ispalindrome function.
    if(!ispalindrome(str,size))    //Any integral value is true, except 0.
    {
        cout<<"The given string is a Palindrome."<<endl;
    }
    else
    {
        cout<<"Not a Palindrome"<<endl;
    } 
    
    
    return 0;
}