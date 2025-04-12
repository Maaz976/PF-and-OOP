
/*
    Author: Muhammad Maaz
    Date: 09 Dec 2024
    This is one of the toughest code. 

*/ 

#include<iostream>
#include<algorithm>

using namespace std;

void PopulateArray(int *array, int size);
void count_unique_elements(int *array, int size, int *uniques);
void find_frequencies(int *frequencies,int *array, int size);
void filterduplicates(int *array, int uniques, int *filtered_array, int size);
void find_mode(int *frequencies, int uniques, int *filtered_array, int *maxfreq);

int main()
{
    int size;  int uniques=1; int maxfreq=0;
    cout<<"Enter size of array: ";
    cin>>size;

    int array[size];
    PopulateArray(array, size);
    sort(array, array+size);
    count_unique_elements(array,size,&uniques);

    
    int frequencies[uniques]={0};
    int filtered_array[uniques]={0};

    find_frequencies(frequencies,array,size);

    filterduplicates(array, uniques, filtered_array, size);

    cout<<"The numbers and there Frequencies are: "<<endl;
    for(int i=0;i<uniques;i++)
    {
        cout<<filtered_array[i]<<" : " <<frequencies[i]<<endl;
    }

    find_mode(frequencies,uniques,filtered_array,&maxfreq);
    
    return 0;
}

void PopulateArray(int *array, int size)

{
    cout<<"Enter the numbers: ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    } 
}

void count_unique_elements(int *array,int size , int *uniques)
{
    for(int i=0;i<size-1;i++)
    {
        if(array[i]!= array[i+1])
        {
            (*uniques)++;
        }
    }

}

void find_frequencies(int *frequencies,int *array, int size)
{
    int index=0;
    int count;
    for(int i=0;i<size;)
    {
        count = 1;
        while(i<size-1 && array[i]==array[i+1])
        {
            count++;
            i++;
        }
        // cout<<"count: "<<i+1<<":"<<count<<endl;
        *(frequencies+index)=count;
        // cout<<"freq: "<<index+1<<":"<<*(frequencies+index)<<endl;
        index++;
        i++;
    }
}

void filterduplicates(int *array, int uniques, int *filtered_array, int size)
{
    int index=0;
    for(int i=0;i<size;)
    {
        if(*(array+i)!=*(array+i+1))
        {
            *(filtered_array + index)=*(array+i);
            index++;
        }
        i++;
    }
}

void find_mode(int *frequencies, int uniques, int *filtered_array, int *maxfreq)
{
    int mode=*filtered_array;
    for(int i=0;i<(uniques);i++)
    {
        if(*(frequencies+i) > (*maxfreq))
        {
            *maxfreq= *(frequencies+i);
            mode=*(filtered_array+i);
        }
    }

    cout<<"The mode is "<<mode<<", appearing "<<*maxfreq<<" times.";
}