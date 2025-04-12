#include<iostream>
using namespace std;
const int rows=2,col=5;

void arr_pass(int arr[rows][col]);
int main()
{
    
    int mat[rows][col];

    cout<<"Enter the values in array: "<<endl;
    int i=0;
    while(i<rows)
    {
        
        int j=0;
        while(j<col)
        {
            
            cin>>mat[i][j];
            j++;
        }
        i++;
              
    }
    arr_pass(mat);
    
    return 0;
}

void arr_pass(int arr[rows][col])
{
    cout<<endl<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col-i-1;j++)
        {
            if(i==0)
            {
                if(arr[i][j]>arr[i][j+1])
                {
                    int temp=arr[i][j];
                    arr[i][j]=arr[i][j+1];
                    arr[i][j+1]=temp;
                }
            }
            else
                {
                    if(arr[i][j]<arr[i][j+1])
                    {
                        int temp=arr[i][j];
                        arr[i][j]=arr[i][j+1];
                        arr[i][j+1]=temp;
                    }
                }
        }
        cout<<endl;
    }

    int i=0;
    while(i<rows)
    {
        
        int j=0;
        while(j<col)
        {
            
            cout<<arr[i][j]<<" ";
            j++;
        }
        cout<<endl;
        i++;
              
    }
    // cout<<arr[0][2]<<endl;
}