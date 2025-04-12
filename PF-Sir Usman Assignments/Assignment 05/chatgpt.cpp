#include <iostream>
#include <cstring>

const int maxseats = 25;
const int maxnamesize = 20;
const int maxitemname = 40;
const int maxtimesize = 30;

using namespace std;

char *DisplayMenu(char *ptrchoice);
void GuestManagement(char **GuestNames, int numGuests);
void EventManagement(char **Items, char **timings, int numItems);

int main()
{
    int numTickets, bookedseats = 0;
    bool allBooked = true;

    int numGuests = 1;
    int numItems = 1;

    int seats[5][5] = {0}; // 25 seats.

    // Allocate memory for guest names and event items dynamically.
    char **GuestNames = new char*[numGuests];
    for (int i = 0; i < numGuests; i++) {
        GuestNames[i] = new char[maxnamesize]; // Allocating memory for each guest name.
    }

    char **Items = new char*[numItems];
    char **timings = new char*[numItems];
    for (int i = 0; i < numItems; i++) {
        Items[i] = new char[maxitemname];  // Allocating memory for each item name.
        timings[i] = new char[maxtimesize]; // Allocating memory for each item's timing.
    }

    char choice = *DisplayMenu(&choice);
    char *ptrchoice = &choice;

MainMenu:
    // Check if all seats are booked.
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (seats[i][j] == 0) {
                allBooked = false;
            }
            else if (seats[i][j] == 1) {
                bookedseats++;
            }
        }
    }

    if (choice == '1') {
        GuestManagement(GuestNames, numGuests);
        DisplayMenu(ptrchoice);
        goto MainMenu;
    }

    else if (choice == '2') {
        EventManagement(Items, timings, numItems);
        DisplayMenu(ptrchoice);
        goto MainMenu;
    }

    else if (choice == '3') {
        cout << "\n\n\t=====Ticket Booking System=====" << endl;
        cout << "\n\tCost per ticket = maxnamesize$" << endl;
        cout << "\tEnter No. of tickets to book: ";
        cin >> numTickets;
        cout << "\tTotal Price of " << numTickets << " tickets is: " << numTickets * maxnamesize << "$" << endl;

        cout << endl << "Press 1 to go to Main Menu or 0 to Exit:  ";
        cin >> choice;
        if (choice == 1) {
            goto MainMenu;
        } else {
            return 0;
        }
    }

    else if (choice == '4') {
        seatingmenu:
        cout << "\n\n\t=====Manage Seat Assignment=====" << endl;
        cout << "\n\t1:View Seating Assignment" << endl;
        cout << "\t2:Book a seat" << endl;
        cout << "\t0:Return to Main Menu" << endl;
        cout << "\n\tEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n\t0 Means: Not Booked\n\t1 Means Booked";
            cout << endl << "\t";
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    cout << seats[i][j] << " ";
                }
                cout << endl << "\t";
            }

            cout << endl << "\tpress 1 to go to Seating System Menu or 0 to exit:  ";
            cin >> choice;
            if (choice == 1) {
                goto seatingmenu;
            } else {
                return 0;
            }
        }

        else if (choice == 2) {
            if (!allBooked) {
                int numSeats;

                cout << "\tEnter Number of seats to book: ";
            SeatSelection:
                cin >> numSeats;
                if (numSeats + bookedseats <= maxseats) {
                    do {
                        int i, j;
                        cout << "\tEnter Row and Column number to Book seat: ";
                    seatplace:
                        cin >> i >> j;
                        if (seats[i][j] == 0) {
                            seats[i][j] = 1;
                            bookedseats++;
                        }
                        else {
                            cout << "\tSeat Already Booked! Choose Another seat: ";
                            goto seatplace;
                        }
                        numSeats--;

                    } while (numSeats > 0);

                    cout << endl << "\tpress 1 to go to main menu or 0 to exit:  ";
                    cin >> choice;
                    if (choice == 1) {
                        goto seatingmenu;
                    } else {
                        return 0;
                    }
                }

                else {
                    cout << "\tOnly " << maxseats - bookedseats << " available. Enter Accordingly : ";
                    goto SeatSelection;
                }
            }
            else {
                goto MainMenu;
            }
        }

        else if (choice == 3) {
            goto MainMenu;
        }
    }

    else if (choice == '5') {
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

void GuestManagement(char **GuestNames, int numGuests)
{
    cout << "\n\n\t=====Guest Registration=====" << endl;
    cout << "Enter the number of guests to be registered: ";
    cin >> numGuests;
    cin.ignore(); // To clear input buffer.
    
    // Re-allocate memory for GuestNames based on numGuests
    GuestNames = new char*[numGuests];
    for (int i = 0; i < numGuests; i++) {
        GuestNames[i] = new char[maxnamesize]; // Allocating memory for each guest name.
    }

    for (int i = 0; i < numGuests; i++) {
        cout << "Enter the name of Guest " << i + 1 << ": ";
        cin.getline(GuestNames[i], maxnamesize);
    }

    cout << "\n\nGuests Successfully registered" << endl;
    cout << "Guests registered: " << endl;
    for (int i = 0; i < numGuests; i++) {
        cout << GuestNames[i] << "  ";
    }
}

void EventManagement(char **Items, char **timings, int numItems)
{
    cout << "\n\n\t=====Event Management System=====" << endl;
    cout << "\n\t1:Enter New Schedule" << endl;
    cout << "\t2:See Saved Event Schedule" << endl;

    int choice;
    cout << "\tEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\tEnter the number of items: ";
        cin >> numItems;

        // Re-allocate memory for Items and timings based on numItems
        Items = new char*[numItems];
        timings = new char*[numItems];
        for (int i = 0; i < numItems; i++) {
            Items[i] = new char[maxitemname];
            timings[i] = new char[maxtimesize];
        }

        cin.ignore();
        for (int i = 0; i < numItems; i++) {
            cout << "\tEnter Item " << i + 1 << ": ";
            cin.getline(Items[i], maxitemname);

            cout << "\tEnter the timing: ";
            cin.getline(timings[i], maxtimesize);
        }

        cout << "\tEvent Schedule saved Successfully." << endl;
    }

    else if (choice == 2) {
        cout << "\tEvent Schedule: " << endl;
        for (int i = 0; i < numItems; i++) {
            cout << Items[i] << " : " << timings[i] << endl;
        }
    }
}
