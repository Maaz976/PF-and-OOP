#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter Number of rows: ";
    cin>>row;
    cout<<"Enter Number of col: ";
    cin>>col;
    int arr[row][col];


    cout<<"Enter the Array: "<<endl;

    for(int i=0;i<row;i++)   //Loop to take input for matrix.
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the element at "<<i<<j<<" :";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Matrix Before Transpose: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"The transpose is: "<<endl;

    for ( int i=0 ; i<col ; i++ )
    {
        for ( int j=0 ; j<row ; j++ )
        {
            
            cout<<arr[j][i]<<" ";    //Interchanging rows and columns for transpose.
        }
        cout<<endl;
    }
    return 0;
}