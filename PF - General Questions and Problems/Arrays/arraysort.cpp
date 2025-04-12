#include<iostream>

using namespace std;
int main()
{
    int array[4][4] ;
    
    cout<<"Enter the array: "<<endl;
    int i=0;
    while(i<4)
    {
        int j=0;
        while(j<4)
        {
            cin>>array[i][j];
            j++;
        }
        i++;
    }

    for(int i=0;i<3;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<4;j++)
            {
                for(int k=0;k<4;k++)
                {
                    if(array[i][j]>array[i][k])
                    {
                        int temp = array[i][j];
                        array[i][j]=array[i][k];
                        array[i][k]=temp;
                    }
                }
            }
        }

        if(i%2!=0)
        {
            for(int j=0;j<4;j++)
            {
                for(int k=0;k<4;k++)
                {
                    if(array[i][j]<array[i][k])
                    {
                        int temp = array[i][j];
                        array[i][j]=array[i][k];
                        array[i][k]=temp;
                    }
                }
            }
        }
    }

    cout<<endl<<endl<<"The sorted array is: "<<endl;
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<4;i++)
        {
            cout<<array[j][i]<<" ";
        }
        cout<<endl;
    }    
    return 0;
}