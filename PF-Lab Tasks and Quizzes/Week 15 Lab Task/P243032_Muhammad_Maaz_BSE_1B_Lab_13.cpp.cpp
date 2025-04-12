#include<iostream>
using namespace std;


int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    
    if(size>15 || size<0)
    {
        cout<<"Invalid input!";
        return 1;
    }
    
    int array[size];
    int freq[size];
    
    int *arrptr=array;
    int *freqptr=freq;
    for(int i=0;i<size;i++)
    {
        *(freq+i)=0;
    }
    cout<<"Enter the Numbers: "<<endl;
    
    for(int i=0;i<size;i++)
    {
        cin>>*(arrptr+i);
    }
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arrptr[i]==arrptr[j])
            {
                (*(freq+i))++;
            }
        }
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<i+1<<": "<<*(arrptr+i)<<" is repeated "<<*(freqptr+i)<<" times "<<endl;
    }

    int max=*freqptr;
    int modeindex;
    int i=0;
    while(i<size)
    {
        if(max<*(freq+i))
        {
            max = *(freqptr+i);
            modeindex=i;
        }
        i++;
        continue;
    }

    cout<<"The mode is "<<*(arrptr+modeindex)<<", apppearing "<<max<<" times"<<endl;

       
    return 0;
}
