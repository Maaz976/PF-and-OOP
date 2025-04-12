#include<iostream>
using namespace std;
int main()
{
    int rows1, col1;
    int rows2, col2;

    cout<<"Enter the number of rows and columns of 1st matrix: ";
    cin >> rows1 >> col1 ;

    cout << "Enter the number of rows and columns of 2nd matrix: ";
    cin >> rows2 >> col2 ;

    if ( col1 != rows2 )
    {
        cout << "Not eligible for Multiplication!" ;
        return 1;
    }

    int A[rows1][col1];
    int B[rows2][col2];

    int *ptrA = &A[rows1][col1];
    int *ptrB = &B[rows2][col2];

    cout<<"Enter 1st Matrix: "<<endl;
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>*(ptrA+i);
        }
    }

    cout<<"Enter 2nd Matrix: "<<endl;
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>*(ptrB+i);
        }
    }


    int product[rows1][col2];
    int *ptrprod = &product[rows1][col2];

    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            * ( ( ptrprod + i ) + j ) ;   
        }
    }
    
    int i , j, k ;
    int sum=0;
    
    for(i=0;i<rows1;i++)
    {
        
        for(j=0;j<col2;j++)
        {
            
            for(k=0;k<rows1;k++)
            {
                sum += A[i][k] * B[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    
    }

    cout<<"The product is:"<<endl;
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<col2;j++)
        {
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}