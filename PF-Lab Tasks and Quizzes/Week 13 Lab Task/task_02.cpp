#include<iostream>
using namespace std;

int sumcolumn(int arr[3][4]);
int main()
{
    int arr[3][4];
    cout<<"Enter The 2D array: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    sumcolumn(arr);

    return 0;
}

int sumcolumn(int arr[3][4])
{
   
    for(int j=0;j<4;j++)//i is coloumn
    {
        int sum=0;
            
            for( int i = 0 ; i<3 ; i++ )//j is rows
            {
                sum = sum + arr[i][j];
            }
            cout<<"The sum of "<<j<<" column is: "<<sum<<endl;
        
    }
}