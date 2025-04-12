#include "iostream"
using namespace std;
int main()
{
    int i,j;    int next = 0,last = 1, secondlast = 0;

    cout <<" Enter the number : " ;
    cin>>i;
    
    for(j=0; j <= i ;  j++)
    {
        cout<< next << " ";
        secondlast = last;
        last = next;
        
        next = last + secondlast;


    }





    return 0;
}