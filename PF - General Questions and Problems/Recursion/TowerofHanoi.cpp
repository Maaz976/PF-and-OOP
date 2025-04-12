#include<iostream>
using namespace std;

void MoveDisk(int count, int needle1,int needle3, int needle2);

int main()
{
    int count, needle1=1,needle2=2,needle3=3;
    cout<<"Enter Number of Disks: ";
    cin>>count;

    cout<<"Follow the steps to Win Game in least moves."<<endl;
    MoveDisk(count,needle1,needle2,needle3);

    return 0;
}

void MoveDisk(int count, int needle1,int needle3, int needle2)
{
    if(count>0)
    {
        MoveDisk(count-1,needle1,needle2,needle3);
        cout<<"Move Disk "<<count<<" from needle "<<needle1<<" to needle "<<needle3<<endl;
        MoveDisk(count-1,needle2,needle3,needle1);
    }
}
