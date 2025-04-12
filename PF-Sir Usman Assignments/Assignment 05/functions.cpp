#include <iostream>
#include <cstring>

const int maxseats = 25;
const int maxnamesize = 20;
const int maxitemname = 40;
const int maxtimesize = 30;

using namespace std;

char *DisplayMenu(char *ptrchoice);
void GuestManagement(char GuestNames[][maxnamesize]);
void EventManagement(char Items[][maxitemname], char timings[][maxtimesize]);

int main()
{

    int numTickets, *ptrnumTickets = &numTickets, bookedseats = 0, *ptrbookedseats = &bookedseats;
    bool allBooked = true;
    bool *ptrallBooked = &allBooked;

    int numGuests = 1;
    int item = 1;
    int *ptritem = &item;
    int *ptrnumGuests = &numGuests;

    int seats[5][5] = {0}, *ptrseats = &seats[0][0]; // 25 seats.

    char GuestNames[*ptrnumGuests][maxnamesize], *ptrGuestNames[numGuests][maxnamesize]; // Restricting Guest name cannot be more than maxnamesize characters.

    char Items[*ptritem][maxitemname], *ptrItems = &Items[item][maxitemname]; // Items is array, item is simple variable. An item name can be upto maxnamesize char.

    char timings[*ptritem][maxtimesize], *ptrTimings = &timings[item][maxtimesize]; // Each item will have specific timing. Such as 09:00 - 11:00

    // Loop to make all seats empty.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            seats[i][j] = 0;
        }
    }

    // Calling Display function to display main menu.

    char choice = *DisplayMenu(&choice);
    char *ptrchoice = &choice;

MainMenu:
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (seats[i][j] == 0)
            {
                allBooked = false;
            }
            else if (seats[i][j] == 1)
            {
                bookedseats++;
            }
        }
    }

    if (choice == '1')
    {
        GuestManagement(GuestNames);
        DisplayMenu(ptrchoice);
        goto MainMenu;
    }

    else if (choice == '2')
    {
        EventManagement(Items, timings);
        DisplayMenu(ptrchoice);
        goto MainMenu;
    }

    else if (choice == '3')
    {
        cout << "\n\n\t=====Ticket Booking System=====" << endl;
        cout << "\n\tCost per ticket = maxnamesize$" << endl;
        cout << "\tEnter No. of tickets to book: ";
        cin >> numTickets;
        cout << "\tTotal Price of " << numTickets << " tickets is: " << numTickets * maxnamesize << "$" << endl;

        cout << endl
             << "Press 1 to go to Main Menu or 0 to Exit:  ";
        cin >> choice;
        if (choice == 1)
        {
            goto MainMenu;
        }
        else
        {
            return 0;
        }
    }

    else if (choice == '4')
    {
    seatingmenu:
        cout << "\n\n\t=====Manage Seat Assignment=====" << endl;
        cout << "\n\t1:View Seating Assignment" << endl;
        cout << "\t2:Book a seat" << endl;
        cout << "\t0:Return to Main Menu" << endl;
        cout << "\n\tEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\n\t0 Means: Not Booked\n\t1 Means Booked";
            cout << endl
                 << "\t";
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << seats[i][j] << " ";
                }
                cout << endl
                     << "\t";
            }

            cout << endl
                 << "\tpress 1 to go to Seating System Menu or 0 to exit:  ";
            cin >> choice;
            if (choice == 1)
            {
                goto seatingmenu;
            }
            else
            {
                return 0;
            }
        }

        else if (choice == 2)
        {
            if (!allBooked)
            {
                int numSeats;

                cout << "\tEnter Number of seats to book: ";
            SeatSelection:
                cin >> numSeats;
                if (numSeats + bookedseats <= maxseats) // To ensure that user does not enter more than available seats.
                {
                    do
                    {

                        int i, j;
                        cout << "\tEnter Row and Column number to Book seat: ";
                    seatplace:
                        cin >> i >> j;
                        if (seats[i][j] == 0) // Meaning if seat is not yet booked.
                        {
                            seats[i][j] = 1;
                            bookedseats++;
                        }
                        else
                        {
                            cout << "\tSeat Already Booked! Choose Another seat: ";
                            goto seatplace;
                        }
                        numSeats--;

                    } while (numSeats > 0);

                    cout << endl
                         << "\tpress 1 to go to main menu or 0 to exit:  ";
                    cin >> choice;
                    if (choice == 1)
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
                    cout << "\tOnly " << maxseats - bookedseats << " available. Enter Accordingly : ";
                    goto SeatSelection;
                }
            }

            else
            {
                goto MainMenu; // If user enter 0, he goes to main menu.
            }
        }

        else if (choice == 3)
        {
            goto MainMenu;
        }
    }

    else if (choice == '5')
    {
        cout << "\tExiting the program. Good bye!" << endl;
        return 0;
    }
    return 0;
}

char *DisplayMenu(char *ptrchoice)
{

    cout << "\n\n\t=====Event Management Sysytem=====";
    cout << "\n\n\t1:Register New Guests " << endl;
    cout << "\t2:Manage Event Schedule" << endl;
    cout << "\t3:Book Tickets" << endl;
    cout << "\t4:Manage Seat Assignment" << endl;
    cout << "\t5:Exit System" << endl;
    cout << "\tEnter your choice: ";
    cin >> *ptrchoice;

    return ptrchoice;
}

void GuestManagement(char GuestNames[][maxnamesize])

{
    int choice;
    int *ptrchoice = &choice;
    cout << "\n\n\t=====Guest Registration=====" << endl;
    int numGuests = 1;
    int *ptrnumGuests = &numGuests;
    cout << "Enter the number of guests to be registered: ";
    cin >> *ptrnumGuests;

    cin.ignore(); // To clear input buffer.
    for (int i = 0; i < *ptrnumGuests; i++)
    {

        cout << "Enter the name of Guest " << i + 1 << ": ";
        cin.getline(GuestNames[i], maxnamesize); // each row will store a name.
    }

    cout << "\n\nGuests Successfully registered" << endl;
    cout << "Guests registered: " << endl;
    for (int i = 0; i < *ptrnumGuests; i++)
    {
        cout << GuestNames[i];
        cout << "  ";
    }
}

void EventManagement(char Items[][maxitemname], char timings[][maxtimesize])
{
    int choice, item, *ptritem = &item;
    int *ptrchoice = &choice;

    cout << "\n\n\t=====Event Management System=====" << endl;
    cout << "\n\t1:Enter New Schedule" << endl;
    cout << "\t2:See Saved Event Schedule" << endl;

    cout << "\tEnter your choice: ";
    cin >> choice;
    

    if (choice == 1)
    {
        cout << "\tEnter the number of items: ";
        cin >> *ptritem;
        char *ptrItems = &Items[*ptritem][maxitemname];
        char *ptrtimings = &timings[*ptritem][maxtimesize];
        

        cin.ignore();
        cout << *ptritem << endl;
        for (int i = 0; i < *ptritem; i++)
        {
            cout << "\tEnter Item " << i + 1 << ": ";
            cin.getline((ptrItems + i), maxitemname);

            cout << "\tEnter the timing: ";
            cin.getline(ptrtimings + i, maxtimesize);
        }
        cin.ignore();

        cout << "\tEvent Schedule saved Successfully." << endl;
    }

    else if (choice == 2)
    {
        cout << "\tEvent Schedule: " << endl;
        for (int i = 0; i < *ptritem; i++)
        {
            cout << Items[i];
            cout << " : ";
            cout << timings[i] << endl;
        }
    }
}
