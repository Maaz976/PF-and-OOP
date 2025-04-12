#include<iostream>
using namespace std;
int main()
{
    int secretnum, input, i = 0;   //i for iteration.
    cout<<"Enter the Secret number: ";
    cin>>secretnum;
   
    
    do
    {
        
        cout<<"Enter your guess: ";
        cin>>input;
            if(input==secretnum)
            {
                cout<<"Congrats! Correct Guess"<<endl;
            }
            else if(input!=secretnum && input>0 && input < 100)
            {
                if(input>secretnum)
                {
                    cout<<"Too high! Try again"<<endl;
                    cout<<"Remaining Tries: "<<5-i<<endl;
                    i++;
                    continue;
                }
                else if(input<secretnum)
                {
                    cout<<"Too Low! Try again "<<endl;
                    cout<<"Remaining Tries: "<<5-i<<endl;
                    i++;
                    continue;
                }              
            }
            else
            {
                cout<<"Invalid Input! Enter 1-100 only."<<endl;
                continue;
            }
    }while(input!=secretnum && i<=5);

}