/* **********Author: Muhammad Maaz************* 
   ***Purpose: To reverse a 3 digit number******/


#include <iostream>
using namespace std;
int main()
{
    int num1,num2 ;
    cout<< "\n\n This program takes an input of a three digit number and prints its mirror! "<<endl;
    cout<<"\n\n Enter the three digit number: ";
    cin>> num1;
    num2 = (num1%10)*100 + ((num1/10)%10)*10 + num1/100; // first, we extract the units part and multiply by 100. then we extract tens digit and multiply by 10.
    cout<< "\n\n\n\tThe reverse of " << num1 << " is : " << num2;  // Then we extract hundreds digit and simply add because in new number, it has to be at units place.


    return 0;
}