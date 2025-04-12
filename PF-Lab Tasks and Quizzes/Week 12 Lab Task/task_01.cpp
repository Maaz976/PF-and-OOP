#include<iostream>
using namespace std;
int main()
{
    int array[10];     int i;
    
    for(i=0;i<10;i++)   //Loop for Taking input for array.
    {
        cout<<"Enter A number: ";
        cin>>array[i];
    }
    cout<<endl;
    int even=0,odd=0;
    for(i=0;i<10;i++)   //Loop to go through array and find how many are odd/even.
    {
        if(array[i]%2==0)
        {
            cout<<array[i]<<" is an even number."<<endl;           
            even++;
        }
        else if(array[i]%2!=0)
        {
            cout<<array[i]<<" is an Odd number."<<endl;;         
            odd++;
        }
    }
    cout<<"\n\n\tThe number of Odd numbers is: "<<odd<<endl;
    cout<<"\tThe number of even numbers is: "<<even<<endl;
        
    return 0;
}
