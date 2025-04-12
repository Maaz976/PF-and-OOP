#include<iostream>
#include<cstring>

using namespace std;

void reverseit(char str[30])
{
    
    for(int i=0;i<int(strlen(str)/2);i++)    //if string has odd length, we will swap all characters except middle. 
    {
        char temp = str[i];             //Swapping the positions
        str[i]=str[(strlen(str))-i-1];
        str[(strlen(str))-i-1]=temp;
        
    }

    cout<<"The reverse of input is: "<<str<<endl;
}

int main()
{

    char str[30];   //Using C-style string, we have to specify length if we have to take input.
    cout<<"Enter the string to get its reverse: "<<endl;
    cin.getline(str,30);

    //reverseit function. 
    reverseit(str);

    return 0;
}