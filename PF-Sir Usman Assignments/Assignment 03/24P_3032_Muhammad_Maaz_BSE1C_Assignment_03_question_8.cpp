#include<iostream>

using namespace std;

int main()

{
    int math_score, phy_score, urdu_score, eng_score, sci_score;

    cout<<"\nEnter your maths score: ";
    cin>>math_score;
    cout<<endl;

    cout<<"Enter your Physics score: ";
    cin>>phy_score;
    cout<<endl;

    cout<<"Enter your Urdu score: ";
    cin>>urdu_score;
    cout<<endl;
    
    cout<<"Enter your English score: ";
    cin>>eng_score;
    cout<<endl;

    cout<<"Enter your Science score: ";
    cin>>sci_score;
    cout<<endl;

    int total = math_score + phy_score + urdu_score + eng_score + sci_score;
    float percentage = (total/5.0);  //Assume 100 total marks per paper. Now 100 of Percentage formula and 500 total will give 5 in denominator.

    cout<<"Your Total Marks are: *** "<<total<<" *** and your Percentage is: *** "<<percentage<<" ***"<<endl;

   

    if ( math_score < 40 && phy_score < 40 || urdu_score < 40 && eng_score < 40 || math_score < 40 && urdu_score < 40 || math_score < 40 && eng_score < 40 || phy_score < 40 && urdu_score < 40 || phy_score < 40 && eng_score < 40) 
        {
        cout<<"\n\n\t ***Repeat the year***"<<endl;
        }

    else if ( math_score < 40 || phy_score < 40 || urdu_score < 40 || eng_score < 40 ) 
        { 
        cout<<" \n\n\t***Unfortunately You have failed a paper!***"<<endl;
        }

    else if (percentage>=75)   //If he has to repeat year, Program will not read these else if statements.
        {
        cout<<"\n\n\t***Distinction***"<<endl;
        }

    else if ( percentage >= 60 ) 
        {
        cout<<"\n\n\t***First Division***"<<endl;
        } 

    else if(percentage >= 50)
        {
        cout<<"\n\n\t***Second division***"<<endl;
        }

    else if(percentage >=40 )
        {
        cout<<"\n\n\t***Third Division***"<<endl;
        }


    return 0;
}