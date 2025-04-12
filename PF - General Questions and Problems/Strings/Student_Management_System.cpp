#include<iostream>
// #include<string>
#include<iomanip>

using namespace std;

void DisplayMenu(char *choice);
void AddNewStudent(string names[10],int roll[10], int marks[10][3]);
void ShowRecords(string names[10], int roll[10], int marks[10][3]);
void CalculateAndPrintAvg(string names[10],int marks[10][3]);
void CheckHighest(string names[10], int marks[10][3]);
void Endline();


int main()
{

    cout<<"\n\n\t================Well Come to Student Portal================"<<endl;
    char choice;
    string names[10];
    int roll[10];
    int marks[10][3];

    for(int i=0;i<10;i++)
    {
        names[i]="-1";
        roll[i]=-1;
        for(int j=0;j<3;j++)
        {
            marks[i][j]=-1;
        }
    }
    
    DisplayMenu(&choice);
    Conditions: 
    if(choice=='1')
    {
        AddNewStudent(names,roll,marks);
        DisplayMenu(&choice);
        goto Conditions;
    }
    else if(choice=='2')
    {
        ShowRecords(names,roll,marks);
        DisplayMenu(&choice);
        goto Conditions;
    }
    else if(choice=='3')
    {
        CalculateAndPrintAvg(names,marks);
        DisplayMenu(&choice);
        goto Conditions;
    }
    else if(choice=='4')
    {
        CheckHighest(names,marks);
        DisplayMenu(&choice);
        goto Conditions;
    }
    else
    {
        cout<<"\n\t\tProgram Exits. Good Bye!"<<endl;
        Endline();
    }


    return 0;
}

void DisplayMenu(char *choice)
{
    cout<<"\n\t\t1:Register new Student"<<endl;
    cout<<"\t\t2:Show Records"<<endl;
    cout<<"\t\t3:See Avergae Marks"<<endl;
    cout<<"\t\t4:Check highest marks"<<endl;
    cout<<"\t\t5:Exit"<<endl;

    cout<<endl<<"\t\tEnter your choice: ";
    cin>>*choice;
    Endline();
}

void AddNewStudent(string names[10],int roll[10], int marks[10][3])
{
    cout<<"\t\tEnter Number of Students to register: ";
    int num;
    cin>>num;

    cout<<endl;

    int i=0,k=0;
    while(names[i]!="-1" && i<=9)
    {
        i++;
    }

    k=i;

    while(i<num+k)
    {
        cout<<"\t\tEnter name of Student "<<i+1<<": ";
        cin>>names[i];

        cout<<"\t\tEnter Roll No.: ";
        cin>>roll[i];

        for(int j=0;j<3;j++)
        {
            cout<<"\t\tEnter subject "<<j+1<<" marks: ";
            cin>>marks[i][j];
        }
        i++;
    }

    cout<<endl<<"\t\tRecord added Successfully"<<endl;
    Endline();
    
}

void ShowRecords(string names[10], int roll[10], int marks[10][3])
{
    cout<<endl<<setw(20)<<"Names"<<setw(15)<<"Roll No."<<setw(20)<<"Subject 1"<<setw(20)<<"Subject 2"<<setw(20)<<"Subject 3"<<endl<<endl;
    int i=0,j=0;
    for(;j<10;j++)
    {
        if(names[j]=="-1")//As soona s -1 is found, it means that numbered student is not yet registered.So we Print Students till then only.
        {
            break;
        }
    }

    while(i<j)
    {
        cout<<setw(20)<<names[i]<<setw(15)<<roll[i]<<setw(20)<<marks[i][0]<<setw(20)<<marks[i][1]<<setw(20)<<marks[i][2]<<endl;
        i++;
    }
    Endline();
    
}

void CalculateAndPrintAvg(string names[10],int marks[10][3])
{
    int j=1;
    while(marks[j][0]!=-1) //Again we need to find How many averages are there.
    {
        j++;
    }

    cout<<setw(20)<<"Name"<<setw(15)<<"Avg. Marks"<<endl;
    for(int i=0;i<j;i++)
    {
        int sum=0;
        for(int k=0;k<3;k++)
        {
            sum+=marks[i][k];
        }
        cout<<setw(20)<<names[i]<<setw(15)<<sum/3.0<<endl;
    }

    Endline();
}

void CheckHighest(string names[10], int marks[10][3])
{
    int j=0;
    while(names[j]!="-1")
    {
        j++;
    }

    int highest=0;
    int index=0;
    for(int i=0;i<j;i++)
    {
        int sum=0;
        for(int k=0;k<3;k++)
        {
            sum+=marks[i][k];
        }

        if(sum>highest)
        {
            highest=sum;
            index=i;
        }
    }

    cout<<endl<<fixed<<setprecision(3)<<"\t\tThe Highest Marks are "<<highest<<" Achieved by :"<<names[index]<<endl; 
    Endline();

}

void Endline()
{
    cout<<"\n\t=====================================================\n"<<endl;
}

