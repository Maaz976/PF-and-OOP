#include <iostream>
using namespace std;
int main()
{
    char room_type, add_services;
    float disc_1, disc_2;
    int nights, cost_per_night, add_charges;
    bool loyalty_member;

    cout << "Enter no. of nights: ";
    cin >> nights;
    cout << "Enter Room type:" << endl
         << "s:single\nd:double\nt:suite" << endl;
    cin >> room_type;
    cout << "Are you a loyalty program memeber(0 if not, 1 if yes): ";
    cin >> loyalty_member;
    cout << "Additional_services:" << endl
         << "s:spa\nb:breakfast\nn:none";
    cin >> add_services;
    switch (room_type)
    {
    case 's':
        cost_per_night = 50;
        break;
    case 'd':
        cost_per_night = 90;
        break;
    case 't':
        cost_per_night = 150;
        break;
    }
    if (nights > 7)
    {
        disc_1 = 0.1;
    }
    else
    {
        disc_1 = 0;
    }

    if (loyalty_member == 1)
    {
        disc_2 = 0.05;
    }
    else
    {
        disc_2 == 0;
    }

    switch (add_services)
    {
    case 's':
        add_charges = 30;
        break;
    case 'b':
        add_charges = 50;
        break;
    case 'n':
        add_charges = 0;
        break;
    }
    cout << "Your Final Booking Price is: " << cost_per_night * nights + add_charges - disc_1 * (cost_per_night * nights + add_charges) - disc_2 * (disc_1 * (cost_per_night * nights + add_charges)) << "$" << endl;

    return 0;
}