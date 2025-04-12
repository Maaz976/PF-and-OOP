#include<iostream>
using namespace std;

int Addmatrices(int a[3][3],int b[3][3]);//a and b are matrices. Corresponds to A & B.

int main()
{
    int A[3][3];
    cout<<"Enter the 1st Matrix: "<<endl;
    for(int i=0;i<3;i++)    
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
            
        }
       
    }

    int B[3][3];
    cout<<"Enter the 2nd Matrix: "<<endl;
    for(int i=0;i<3;i++)       //Loop to take input for Matrix B.
    {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
           
        }
        

    }

    Addmatrices(A,B);//Calling Function to add our matrices.

    return 0;
}

int Addmatrices(int a[3][3],int b[3][3])
{
    cout<<endl<<endl;
    cout<<"A+B is: "<<endl;
    for(int i=0;i<3;i++)   //Loop for finding and printing the sum of Matrices.
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum = a[i][j] + b[i][j];
            cout<<sum<<" ";
        }
        cout<<endl;
        
    }
    
}