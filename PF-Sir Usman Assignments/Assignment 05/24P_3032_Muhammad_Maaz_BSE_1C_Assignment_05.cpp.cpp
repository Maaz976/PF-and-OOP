#include<iostream>
#include<cstring>
using namespace std;


//1st Word of Function Name is Capitalized for Specification.
void DisplayMenu(char *choice);
void RegisterGuests();
void EventSchedule();
void ManageSeatAssignment(bool seating[10][10]);
void BookTicket();


int main()
{
    char choice;
    char *ptrchoice=&choice;
    bool seating[10][10];  //At max. 100 Guests Allowed to be seated. A seat can have two states, booked or free. so i took bool.

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            seating[i][j]=0;
        }
    }
    
    Options:
    DisplayMenu(ptrchoice);
    
        if (*ptrchoice=='1')
        {
            RegisterGuests();
            
            goto Options;
           
        }
        else if(*ptrchoice=='2')
        {
            EventSchedule();
            
            goto Options;
        }
        else if(*ptrchoice=='3')
        {
            ManageSeatAssignment(seating);
            
            goto Options;
        }
        else if(*ptrchoice=='4')
        {
            BookTicket();
            
            goto Options;
        }
        else if(*ptrchoice=='5')
        {
            cout<<"Programs Exits! Good Bye"<<endl;
            return 0;
        }
    
    return 0;
}

void DisplayMenu(char *choice)
{
    cout<<"\n\n\t===Event Management System==="<<endl;
    cout<<"\n\n\t1:Register New Guests"<<endl;
    cout<<"\t2:Event Schedule"<<endl;
    cout<<"\t3:Seating Assignment"<<endl;
    cout<<"\t4:Book Tickets"<<endl;
    cout<<"\t5:Exit Program"<<endl;
    cout<<"\tEnter your choice: ";
    cin>>*choice;
    cout<<endl;
}

void RegisterGuests()
{

    cout<<"\n\n\t===Guest Registration==="<<endl;
    int numGuests;
    string guestNames[10];   //At max. he can register 10 guests.
    cout<<"\n\tEnter The Number of Gusets to register: ";
    cin>>numGuests;

    for(int i=0;i<numGuests;i++)
    {
        cout<<"\tEnter Name of Guests "<<i+1<<" : ";
        cin>>(guestNames[i]);
    }

    cout<<"\n\tRegistration Successful! "<<endl<<"\tRegistered Guests: "<<endl;
    for(int i=0;i<numGuests;i++)
    {
        cout<<guestNames[i]<<endl;
    }

}

void EventSchedule()
{
    cout<<"\n\n\t===Scheduled Event==="<<endl;
    cout<<"\n\n\tWell Come and Start - 09:00 AM"<<endl;
    cout<<"\tRecitation of Holy Quran - 09-30 AM"<<endl;
    cout<<"\tArabic Naat by Muhammad Al-Muqit - 09:45 AM"<<endl;
    cout<<"\tMufti Tariq Masood Bayan - 10:00 AM"<<endl;
    cout<<"\tKhatima Tul Quran - 11:30 AM"<<endl;
    cout<<"\tDua - 12:00 AM"<<endl;
    cout<<"\t Launch For Guests - 12:30 PM"<<endl;
    cout<<"\tZuhar Prayer and Ending - 01:30 PM"<<endl;

}

void ManageSeatAssignment(bool seating[10][10])
{
    char choice;
    Menu:
    cout<<"\n\n\t===Seating Menu==="<<endl;
    cout<<"\n\t1:View Current Seating"<<endl;
    cout<<"\t2:Book A seat"<<endl;
    cout<<"\n\tEnter your Choice: ";
    cin>>choice;
        if(choice=='1')   //If user wants to see current seating
        {
            cout<<"\n\tCurrent Seating: "<<endl;
            for(int i=0;i<10;i++)
            {
                for(int j=0;j<10;j++)
                {
                    cout<<"\t"<<seating[i][j]<<" ";
                }
                cout<<endl;
            }

            goto Menu;
        }
        else if(choice=='2')  //If user wants to book a seat
        {
            int numSeats;
            int row_number, col_number;
            cout<<"\n\tEnter Number of seats you want to book: ";
            cin>>numSeats;

            for(int i=0;i<numSeats;i++)  
            {
                seat_Position:
                cout<<"\tEnter Row and Column Number of Seat "<<i+1<<": ";
                cin>>row_number>>col_number;
                    if(seating[row_number][col_number]!=1)  //If seat is not yet booked.
                    {
                        seating[row_number][col_number]=1;    //That seat will be booked.
                    }
                    else if(seating[row_number][col_number==1])   //If seat has already been booked.
                    {
                        cout<<"\t\tSorry! Seat Already Booked! Please Choose another"<<endl;
                        goto seat_Position;
                    }
            }

            cout<<"\n\tSeats Successfully Booked" <<endl;
        }
}

void BookTicket()
{
    int numTickets;
    cout<<"\n\n\t===Ticket Booking Menu==="<<endl;
    cout<<"\tCost per Ticket: 20$"<<endl;
    cout<<"\n\tEnter number of tickets to Book:";
    cin>>numTickets;
    cout<<"Total Cost: "<<20*numTickets<<"$"<<endl;

}

