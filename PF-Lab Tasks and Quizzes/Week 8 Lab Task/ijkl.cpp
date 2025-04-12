#include<iostream>
using namespace std;
int main()
{
    int a; int total=0;char name; int grade,highestgrade=0 ;
    cout<<"How many student do you want to input: ";
    cin>>a;
    int i = 1;
    for(i = 1; i<=a; i++ )
    {    
        
        cout<<"Enter the name of student " << i <<": ";
        cin>>name;
        cout<<"Enter "<<name << "'s Grade:";
        cin>>grade;

        total = total + grade;
       if (grade > highestgrade){highestgrade=grade;}
        
    }
    // cout<<"Enter the highest grade: ";
    // cin>>grade;   //Since user has input grade, he know
    cout<< "The average grade is: ";   // that what are highest marks. he can input.
    cout<<total/i; 
    cout<<endl;
    cout<<"The greatest grade is: ";
    cout<<highestgrade<<endl;

    return 0;
}