#include<iostream>

using namespace std;

int main()

{
    int stops[10]={1,2,3,4,5,6,7,8,9,10};
    int passengers[10]={24,17,20,29,22,25,33,19,27,15};
    int sum=0,code;  int i=0;
    cout<<"\nEnter the Stop code: ";
    cin>>code;
    bool isfound = true;
    while(i<10)
    {
        if(stops[i] == code)
        {
            cout<<"The stop was found at index: "<<i<<endl;
            isfound = false;  //if condition not met, isFound does not change so "Stop code not found" is printed.
            break;
        }
        i++;
    }
    if(isfound)
    {
        cout<<"\n\n\tStop code not found!"<<endl;
    }
    int max=passengers[0], min = passengers[0]; int maxstop;
    for(i=0;i<10;i++)
    {
        if(passengers[i]>max)
        {
            max=passengers[i];  //To store max passengers stop and its index. 
            maxstop=i;
        }
        
        sum += passengers[i];  //for calculation of average.
    }
    cout<<"\n\nThe Highest passengers are "<< max <<" at stop "<< maxstop <<endl;
    int average = sum/10;    //Average for my array is 23.
    
    cout<<"The stops with passengers higher than average are: ";
    for(i=0;i<10;i++)
    {   
        
        if(average<passengers[i])
        {
            cout<< stops[i] << " ";
        }    //Please note that here, the index is not printed, but stop code.
    }
    cout<<endl<<endl;

    return 0;
}