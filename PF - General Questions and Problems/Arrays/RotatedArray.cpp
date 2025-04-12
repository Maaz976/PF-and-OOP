#include <iostream>
using namespace std;

int main()
{
    int rows,cols;
    cout<<"Enter Number of rows and cols: ";
    cin>>rows>>cols;
    cout<<endl;

    int matrix[rows][cols];
    cout<<"Enter Matrix: "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            swap(matrix[i][j],matrix[j][cols-i-1]);
        }
    }


    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
[
 Clockwise:
1 2 3
4 5 6
7 8 9

Transpose:
1 4 7
2 5 8
3 6 9

7 4 1
8 5 2
9 6 3

Anti-ClockWise:

1 2 3
4 5 6
7 8 9

3 6 9
2 5 8
1 4 7
]


for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        swap(matrix[i][j], matrix[j][cols-1-i])
    }
}
*/