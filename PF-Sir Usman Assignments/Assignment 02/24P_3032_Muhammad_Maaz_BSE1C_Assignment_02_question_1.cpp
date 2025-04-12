/***********************Author : Muhammad Maaz************************
 ********Purpose: To Multiply, add and subtract complex numbers*******
 */


#include<iostream>
using namespace std;
int main()
{
    int a1 = 0,b1=0,a2=0,b2=0;     // Declaring the real and imaginary parts. Storing 0s so as to make all bits zero.
    cout << "This Program will add. subtract and multiply two complex numbers." <<endl;
    cout<< " \n\nEnter the real and imaginary parts with a space between them: ";  
    cin>>a1>>b1;     // Taking input for first complex number.
    cout<< " \n\nEnter the real and imaginary parts with a space between them: ";
    cin>>a2>>b2;     // Taking input for second complex number.
    
    cout << "\n\n\tThe sum is: " << a1 + a2 << "+(" << b1+b2 << ")i" << endl;   // Using brackets so that negative sign may be handled nicely.
    cout << "\tThe difference is: " << a1 - a2 << "+(" << b1 - b2 << ")i" << endl;
    cout << "\tThe product is: " << (a1 * a2 - b1 * b2) << "+(" << (a1*b2 + b1*a2) << ")i\n\n" << endl; 
                    // Because Real*Real give real product. Imaginary*Imaginary give negative Real while Real*Imaginary give Imaginary. 

    return 0;
}