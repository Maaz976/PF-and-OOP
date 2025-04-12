#include<iostream>
using namespace std;
int main()
{
    int pos1,pos2;

    int array[5]={1,2,3,4,5};
    cout<<"The array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<"Enter position to Exchange: ";
    cin>>pos1>>pos2;

    pos1-=1; pos2-=1;
    int temp = array[pos1];
    array[pos1]=array[pos2];
    array[pos2]=temp;

    cout<<"The array after exchanging poistions is: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}