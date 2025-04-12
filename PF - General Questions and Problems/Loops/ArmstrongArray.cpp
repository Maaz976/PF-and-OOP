/*
    Author: Muhammad Maaz
    Date: 06 September, 2024
    Descritpion: This code will find the number of ARMSOTRONG NUMBERS in the gievn array.
    Armstrong number are those for which if each digit is raised to the power, equal to its number of digits, 
    and then summed up, the result is that same number. E.g. 153 has three digits and 1^3 + 5^3 + 3^3 = 153. So its Armstrong number.

*/ 



#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int array[10];
    int *arr = array;
    cout << "Enter 10 numbers: " << endl;
    int i = 0;
    do
    {
        cin >> *(arr + i);
        i++;
    } while (i < 10);

    i = 0;
    int nArmstrongs = 0;
    do
    {

        int numDigits = 0;
        int temp = *(arr + i);
        int sum = 0;
        do // Loop to Count Number of digits.
        {

            numDigits++;
            temp /= 10;

        } while (temp / 10 != 0); // numDigits=3; for153;
        cout<<"No. Digits: "<<numDigits<<endl;

        temp = *(arr + i); // setting temp=that number of array;
        int k=0;
        do // Loop to calculate sum;
        {
            int power = 1;
            int j = 0;
            do // Loop to calculate power of each digit. 1^3 and 5^3 and 3^3.
            {
                power *= temp % 10; // 1st iteration = temp = 153;
                cout<<power<<" ";

                j++;

            } while (j < numDigits);

            temp /= 10;
            sum += power;
            cout<<endl<<power<<endl;
            cout<<"sum: "<<sum<<endl;
            k++;

        } while (k<numDigits);

        if (sum == *(arr + i))
        {
            nArmstrongs++;
            cout << *(arr + i) << " is an Armstrong at index " << i << endl;
            cout<<"Arms: "<<nArmstrongs<<endl;
        }

        i++;

    } while (i < 10);

    cout<<"There are in total, "<<nArmstrongs<<" Armstrong Numbers"<<endl;

    return 0;
}