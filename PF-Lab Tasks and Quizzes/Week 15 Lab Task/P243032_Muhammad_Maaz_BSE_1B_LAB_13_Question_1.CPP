#include<iostream>
#include<iomanip>

using namespace std;

int stds;  //stds = students.

float average( int* );
int max( int* );
int min(int*);

int main()
{
    int max_size=10;
    cout<<"\n\tWell Come"<<endl;
    cout<<"This program will find average, highest, lowest marks. "<<endl;
    cout<<endl<<"Enter the number of students: ";
    cin>>stds;

    if(stds>max_size)
    {
        cout<<"Invalid Iuput! Enter Number between 1-10 only.\nProgram Terminated "<<endl;
        return 1;
    }

    int stdlist[stds];   //stands for "students list".
    
    int i=0;
    do
    {
        cout<<"Enter Marks of Student "<<i+1<<": ";
        cin>>stdlist[i];
        i++;

    } while (i<stds);
    
    cout<<setprecision(3)<<showpoint<<fixed<<endl;
    cout<<"\n\nThe Average Marks are: "<<average(stdlist)<<endl;
    cout<<"The Highest Marks are: "<<max(stdlist)<<endl;
    cout<<"The Lowest Marks are: "<<min(stdlist)<<endl;

    return 0;
}


//Function to find average.
float average( int* marks )
{
    int sum = 0;
    int i=0;
    while(i<stds)
    {
        sum+=*marks;
        marks++;
        i++;
    }


    return (sum*(1.0))/stds;
}

//Function to find highest.
int max(int* marks)
{
    int highest = *marks;
    int i=0;
    while(i<stds)
    {
        if(*(marks)>highest)
        {
            highest = *marks;
        }
        marks++;
        i++;
    }

    return highest;

}

//Function to find lowest.
int min(int* marks)
{
    int lowest = *marks;
    int i=0;
    while(i<stds)
    {
        if(*(marks)<lowest)
        {
            lowest = *marks;
        }
        marks++;
        i++;
    }

    return lowest;

}
