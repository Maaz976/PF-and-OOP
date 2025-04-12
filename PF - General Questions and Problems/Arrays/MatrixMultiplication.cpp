#include<iostream>

using namespace std;



int main()
{
    cout<<"This Program Find the product of Two matrices A and B."<<endl<<endl;

    int r1,c1,r2,c2;
    do
    {
        cout<<"Enter Number of Rows and Cols of A: ";
        cin>>r1>>c1;
        cout<<"Enter Number of Rows and Cols of B: ";
        cin>>r2>>c2;

        if(c1!=r2)
        {
            cout<<"Not Eligible For Multiplications. Enter Again."<<endl;
        }
    }while(c1!=r2);

    int A[r1][c1];int B[r2][c2];
    
    cout<<"Enter First Matrix: "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>A[i][j];
            
        }
    }

    cout<<"Enter Second Matrix: "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>B[i][j];
        }
    }

    int C[r1][c2];
    
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            int sum=0;
            for(int k=0;k<r2;k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }

    cout<<"The Product is: "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}
