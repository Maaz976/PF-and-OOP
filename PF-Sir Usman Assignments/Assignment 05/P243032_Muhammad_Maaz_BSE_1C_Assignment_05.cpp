#include<iostream>
#include<cstring>


using namespace std ;

int DisplayMenu();




int main()
{
    
    
    int numTickets, bookedseats=0; bool allBooked = true; 
    int numGuests=1;
    int item=1;
    int *ptritem = &item;
    int *ptrnumGuests = &numGuests;
    int seats[5][5]={0};              // 25 seats.
    char GuestNames[numGuests][20];   //Restricting Guest name cannot be more than 20 characters.
    char Items[item][40];       //Items is array, item is simple variable. An item name can be upto 20 char.
    char timings[item][30];    //Each item will have specific timing. Such as 09:00 - 11:00

    

    //Loop to make all seats empty.
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            seats[i][j]=0;
        }
    }

    MainMenu:
    int choice = DisplayMenu();
    

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(seats[i][j]==0)
            {
                allBooked = false;
            }
            else if(seats[i][j]==1)
            {
                bookedseats++;
            }
        }
    }

    if(choice==1)
    {
        cout<<"\n\n\t=====Guest Registration====="<<endl;
        int numGuests;
        cout<<"Enter the number of guests to be registered: ";
        cin>>*ptrnumGuests;

        cin.ignore();   //To clear input buffer.
        for(int i=0;i<*ptrnumGuests;i++)
        {
            
            cout<<"Enter the name of Guest "<<i+1<<": ";
            cin.getline( GuestNames[i] , 20 );  //each row will store a name.
            
        }

        cout<<"\n\nGuests Successfully registered"<<endl;
        cout<<"Guests registered: "<<endl;
        for(int i=0;i<*ptrnumGuests;i++)
        {
            cout<<GuestNames[i];
            cout<<"  ";    
        }

        
        cout<<"press 1 to go to main menu or 0 to exit:  ";
        cin>>choice;
        if(choice==1)
        {
            goto MainMenu;
        }
        else
        {
            return 0;
        }

    }

    else if(choice==2)
    {
        cout<<"\n\n\t=====Event Management System====="<<endl;
        cout<<"1:Enter New Schedule"<<endl;
        cout<<"2:See Saved Event Schedule"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter the number of items: ";
            cin>>*ptritem;

            cin.ignore();
            for(int i=0;i<*ptritem;i++)
            {
                cout<<"Enter Item "<< i+1 <<": ";
                cin.getline(Items[i],40);

                
                cout<<"Enter the timing: ";
                cin.getline(timings[i],30);
                
            }
            cin.ignore();

            cout<<"Event Schedule saved Successfully."<<endl;
            cout<<"Event Schedule: "<<endl;
            for(int i=0;i<*ptritem;i++)
            {
                cout<<Items[i]<<" : " << timings[i]<<endl;
            }

            cout<<"press 1 to go to main menu or 0 to exit:  ";
            cin>>choice;
            if(choice==1)
            {
                goto MainMenu;
            }
            else
            {
                return 0;
            }
            
        }

        else if(choice == 2)
        {
            cout<<"Event Schedule: "<<endl;
            for(int i=0;i<*ptritem;i++)
            {
                cout<<Items[i]; cout<<" : " ; cout<< timings[i]<<endl;
            }

            cout<<"press 1 to go to main menu or 0 to exit:  ";
            cin>>choice;
            if(choice==1)
            {
                goto MainMenu;
            }
            else
            {
                return 0;
            }

        }
    }

    else if(choice==3)
    {
        cout<<"\n\n\t=====Ticket Booking System====="<<endl;
        cout<<"\n\tCost per ticket = 20$"<<endl;
        cout<<"\tEnter No. of tickets to book: ";
        cin>>numTickets;
        cout<<"\tTotal Price of "<<numTickets<<" tickets is: "<<numTickets*20<<"$"<<endl;

        cout<<endl<<"Press 1 to go to Main Menu or 0 to Exit:  ";
        cin>>choice;
        if(choice==1)
        {
            goto MainMenu;
        }
        else
        {
            return 0;
        }


    }
    
    else if(choice==4)
    {
        seatingmenu:
        cout<<"\n\n\t=====Manage Seat Assignment====="<<endl;
        cout<<"\n\t1:View Seating Assignment"<<endl;
        cout<<"\t2:Book a seat"<<endl;
        cout<<"\t0:Return to Main Menu"<<endl;
        cout<<"\n\tEnter your choice: ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"\n\t0 Means: Not Booked\n\t1 Means Booked";
            cout<<endl<<"\t";
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<seats[i][j]<<" ";
                }
                cout<<endl<<"\t";
            }

            cout<<endl<<"\tpress 1 to go to Seating System Menu or 0 to exit:  ";
            cin>>choice;
            if(choice==1)
            {
                goto seatingmenu;
            }
            else
            {
                return 0;
            }

        }

        

        else if(choice==2)
        {
                if(!allBooked)
                {
                    int numSeats;
                    
                    cout<<"\tEnter Number of seats to book: ";
                    SeatSelection:
                    cin>>numSeats;
                    if(numSeats+bookedseats<=25)   //To ensure that user does not enter more than available seats.
                    {
                        do
                        {
                            
                            int i,j;   
                            cout<<"\tEnter Row and Column number to Book seat: ";
                            seatplace:
                            cin>>i>>j;
                            if(seats[i][j] == 0 )   //Meaning if seat is not yet booked.
                            {
                                seats[i][j]=1;
                                bookedseats++;
                            }
                            else
                            {
                                cout<<"\tSeat Already Booked! Choose Another seat: ";
                                goto seatplace;
                            }
                            numSeats--;

                        }while(numSeats>0); 

                        cout<<endl<<"\tpress 1 to go to main menu or 0 to exit:  ";
                        cin>>choice;
                        if(choice==1)
                        {
                            goto seatingmenu;
                        }
                        else
                        {
                            return 0;
                        }

                    }

                    else
                    { 
                            cout<<"\tOnly "<< 25 - bookedseats << " available. Enter Accordingly : ";
                            goto SeatSelection;
                    }
                }

                else
                {
                    goto MainMenu;  //If user enter 0, he goes to main menu.
                }
        }

        else if(choice==3)
        {
            goto MainMenu;
        }
    }

    else if(choice==5)
    {
        cout<<"\tExiting the program. Good bye!"<<endl;
        return 0;
    }
    return 0;
}

int DisplayMenu()
{
    int choice;
    
    cout<<"\n\n\t=====Event Management Sysytem=====";
    cout<<"\n\n\t1:Register New Guests "<<endl;
    cout<<"\t2:Generate Event Schedule"<<endl;
    cout<<"\t3:Book Tickets"<<endl;
    cout<<"\t4:Manage Seat Assignment"<<endl;
    cout<<"\t5:Exit System"<<endl;
    cout<<"\tEnter your choice: ";
    cin>>choice;

    return choice;
}


