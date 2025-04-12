#include<iostream>

using namespace std;
int main()
{
    cout<<"Enter number of Rows and Cols: ";
    int numRows, numCol;
    cin>>numRows>>numCol;

    int array[numRows][numCol];
    cout<<"Enter Matrix: "<<endl;
    for(int i=0;i<numRows;i++)
    {
        for(int j=0;j<numCol;j++)
        {
            cin>>array[i][j];
        }
    }

    
    cout<<"The array in Spiral from is : "<<endl;

    int top=0,bottom=numRows,left=0,right=numCol;

    for(int i=0;left<=right;i++)
    {
        int j=left;
        for(;j<right;j++)
        {
            cout<<array[top][j]<<" ";
            
        }
        top++;
        cout<<endl;
        //For moving down
        int k=top;
        for(;k<bottom;k++)
        {
           
            cout<<array[k][right-1]<<" ";
        }
        bottom--;
        cout<<endl;
        //for moving left
        for(;j>left;j--)
        {
            cout<<array[top][j]<<" ";
        }
        left++;
        cout<<endl;
        for(;k>top;k--)
        {
            cout<<array[k][top]<<" ";
        }
        right--;
        cout<<endl;
        cout<<endl;


       
        
        
        
    }





    return 0;
}