#include<iostream>
using namespace std;

int totalmarks(int math, int science, int eng);
int Percentage(int total);

int main()
{
    int numStudents;
    cout<<"Enter the number os students: ";
    cin>>numStudents;
    int math, eng, science;
    string name;

    int i=0;
    while(i<numStudents)
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Math score: ";
        cin>>math;
        cout<<"Enter Science score: ";
        cin>>science;
        cout<<"Enter Eng score: ";
        cin>>eng;

        cout<<"Student Name: "<<name<<endl;
        cout<<totalmarks(math,science,eng)<<endl;
        cout<<Percentage(totalmarks(math,science,eng))<<endl;
        i++;
    }

    return 0;
}

int totalmarks(int science, int math, int eng)
{
    return science+math+eng;
}

int Percentage(int totalmarks)
{
    cout<<fixed<<showpoint;
    return ((1.0*totalmarks)/300.0)*100.0;
}
