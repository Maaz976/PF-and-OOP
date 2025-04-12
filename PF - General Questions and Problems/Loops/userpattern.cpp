#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    int n;   char symbol;
    cout<<"Enter number of rows you want: ";
    cin>>n;
    cout<<"Enter the symbol: ";
    cin>>symbol;
    int i = 0;
        do
        {
            int j=n;
            do
            {
                cout<<" ";
                j--;
            } while (j>i);

            j=0;
            do
            {
                cout<<symbol;
                j++;
            } while (j<i);

            j=0;
            do
            {
                cout<<symbol;
                j++;
            } while (j<i);
            
            cout<<endl;
            i++;

        } while (i<n);

        i=n;
        do
        {
            int j=n;

            
            do
            {
                cout<<" ";
                j--;
            } while (j>i);
            
            
            do
            {
                cout<<symbol;
                j--;
            } while (j>i);

            j=0;
            do
            {
                cout<<symbol;
                j++;
            } while (j<i);

            cout<<endl;
            
            i--;

        } while (i>0);


        


    return 0;
}