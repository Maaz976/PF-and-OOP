#include<iostream>
using namespace std;

int main()

{
    cout<<"Enter size of array: ";
    int size;
    cin>>size;

    int array[size];
    cout<<"Enter Array: ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }

    bool found=true;
    int target;
    cout<<"Enter your Target: ";
    cin>>target;

    //We can add a loop so that code will make combinations of 4 elements. And Vice versa
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            for(int k=j+1;k<size;k++)
            {
                if(array[i]+array[j]+array[k] == target)
                {
                    found=false;
                    cout<<"Numbers at "<<i+1<<", "<<j+1<<" and "<<k+1<<" add to give "<<target<<endl;
                }
            }
        }
    }

    if(found)
    {
        cout<<"None of Combinations give Target Sum!"<<endl;
    }
    return 0;
}