#include<iostream>
using namespace std;

void Display();
void GuestRegistration(int *numGuests, string names[]);
void EventSchedule(int *numItems, string *itemlist[],string timinglist[]);
void BookTickets();
void ManageSeatAssignment();

int main()
{   
    char choice;
    int numGuests=1, numItems=1;
    string names[*(&numGuests)], itemlist[*(&numItems)], timinglist[*(&numItems)];

    void Display();
    cout<<"Enter your choice: ";
    
    do
    {
        cin>>choice;
        if(choice=='1')
        {
            GuestRegistration(&numGuests, names);
        }
        else if(choice=='2')
        {
            EventSchedule(&numItems,&itemlist,timinglist);
        }
        else if(choice=='3')
        {
            // BookTickets();
        }
        else if(choice=='4')
        {
            // ManageSeatAssignment();
        }
        else if(choice=='5')
        {
            return 0;
        }
        else 
        {
            cout<<"Invalid Choice! Enter again: ";
        }

    }while(choice!='1'||choice!='2'||choice!='3'||choice!='4'||choice!='5'||!cin);

    return 0;
}

void Display()
{
    cout<<"\n\n\t=====Event Management Sysytem=====";
    cout<<"\n\n\t1:Register New Guests "<<endl;
    cout<<"\t2:Generate Event Schedule"<<endl;
    cout<<"\t3:Book Tickets"<<endl;
    cout<<"\t4:Manage Seat Assignment"<<endl;
    cout<<"\t5:Exit System"<<endl;
    
}

void GuestRegistration(int *numGuests, string names[])
{
    cout<<"\n\tEnter Number of Guests: ";
    cin>>*numGuests;
    for(int i=0;i<*numGuests;i++)
    {
        cout<<"\n\tEnter the name of Guest "<<i+1<<" :";
        cin>>names[i];
    }

    cout<<"\n\tGuest Registration Successful"<<endl;
    cout<<"Guests Registered: "<<endl;
    for(int i=0;i<*numGuests;i++)
    {
        cout<<names[i]<<" ";
    }
}

void EventSchedule(int *numItems, string *itemlist[],string timinglist[])
{
    cout<<"Enter Number of items: "<<endl;
    cin>>*numItems;
    cout<<endl;
    for(int i=0;i<*numItems;i++)
    {
        cout<<"Enter Item"<<i+1<<" name: ";
        cin>>*itemlist[i];
        cout<<"Enter Timing: ";
        cin>>timinglist[i];
    }

    cout<<"Event Schedule Saved!"<<endl;
    cout<<"Event Schedule:"<<endl;

    for(int i=0;i<*numItems;i++)
    {
        cout<<itemlist[i]<<" : "<<timinglist[i]<<endl;
    }
}