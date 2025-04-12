#include<iostream>


using namespace std;

int main()
{
    cout<<"Enter number of Desired Rows: ";
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows-i;j++)
        {
            cout<<" ";
        }
        int n=1;
        for(int k=0;k<=rows;k++)
        {
            // if(n!=0)
            cout<<" "<<n;
            n=n*(i-k)/(k+1);
        }
        cout<<endl;
    }
    return 0;
}