#include<iostream>
using namespace std;
int main()
{
    int row=4, col=3;
    int total=0;
    int marks[row][col];
    int Total[4];

    for(int i=0;i<row;i++)   //Taking input for 2d array as marks for each subject
    {
        total=0;
        cout<<"Enter The marks of Student "<< i+1 <<": "<<endl;
        for(int j=0;j<col;j++)
        {
            cout<<"Subject "<<j+1<<": ";
            cin>>marks[i][j];

            total += marks[i][j];
        }
        Total[i]=total;   //Calculating total marks for 3 subjects of 1 student.
        
        cout<<endl;
    }

    cout<<endl<<endl;
    for(int i=0;i<row;i++)
    {
        cout<<"Total Marks of Student "<<i+1<<" is: "<<Total[i]<<endl;
    }

    int high=marks[0][0],low=marks[0][0];

    for(int i=0;i<row;i++)  //Loop to find lowest and highest marks
    {
        for(int j=0;j<col;j++)
        {
            if(marks[i][j]>high)
            {
                high = marks[i][j];
            }

            if(marks[i][j]<low)
            {
                low=marks[i][j];
            }
        }
    }

    cout<<"The highest score is: "<<high<<endl;
    cout<<"The lowest score is: "<<low<<endl;



    return 0;
}