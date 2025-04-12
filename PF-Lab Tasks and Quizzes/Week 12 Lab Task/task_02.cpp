#include<iostream>
using namespace std;
int main()
{
    int rating[10], stars;

    for(int i=0;i<10;i++)
    {
    cout<<"Enter Rating from 1-5: ";
    cin>>rating[i];
        if(rating[i]>=1 && rating[i]<=5)
        {
            continue;
        }       //Applying Conditions so that only valid rating is entered.
        else 
        {
            cout<<"Invalid Input! Program exits.";
            return 1;   //Returning 1 to show something is not right.
        }
    }
    int max=rating[0], min=rating[0], sum=0;
    for(int i=0;i<10;i++)
    {  
        //Loop to find and note the max and min rating.
        if(max<rating[i])
        {
            max=rating[i];
        }                                             
        else if(min>rating[0])
        {
            min=rating[i];
        }
        //Summation for calculation of average.
        sum += rating[i];
    }

    
    cout<<"\nThe Max Rating is: "<<max<<endl;
    cout<<"The Minimum Rating is: "<<min<<endl;
    cout<<"The average Rating is: "<<sum/10;  //To store space, Not using another variable for average.
  



    return 0;
}