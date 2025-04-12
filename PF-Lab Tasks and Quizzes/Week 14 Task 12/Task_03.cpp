#include<iostream>
using namespace std;
int main()
{
    int order;
    cout<<"Enter Order of 2D Array: ";
    cin>>order;

    int arr[order][order];  //For square matrix, rows = columns.
    cout<<"Enter the elements of Array: "<<endl;

    for(int i=0;i<order;i++)   //Loop to take input for Array
    {
        for(int j=0;j<order;j++)
        {
            cin>>arr[i][j];
        }
    }

    int sumrows=0;    
    int sumcol=0;
    int sumd1=0;   //Stores the sum of maindiagonal
    int sumd2=0;     //stores the sum of other diagonal;

    int SUMROWS[order];  //it will store sum of number of each row.
    int SUMCOL[order];  //it will store sum of number of each column.
     

    for(int i=0;i<order;i++)   //Loop to go through array.
    {
        sumrows=0;
        for(int j=0;j<order;j++) //Loop to sum each row.
        {
            sumrows += arr[i][j];
        }

        
        SUMROWS[i] = sumrows;
    }

    for(int i=0;i<order;i++)   //Loop to go through array.
    {
        sumcol=0;
        for(int j=0;j<order;j++)       //Loop to find sum of each column
            {
                sumcol+=arr[j][i];
            }
            
        SUMCOL[i]=sumcol;
    }

    for(int i=0;i<order;i++)   //   This loop calculates only the sum of main diagonal(diagonal from left to right)
    {
        
        for(int j=0;j<order;j++)
        {
            if(i==j )    //for diagonal elements, row number = column number.
            {
                sumd1+=arr[i][j];
            }
            
            
        }
       
    }

    for(int i=0;i<order;i++)
    {
        for(int j=order-1;j>0;j--)
        {
            sumd2 += arr[i][j-i];
            break;  //Inner for loop breaks because we have to pick only one element from each row.
        }
    }
    
    int checker=sumd2;  //This number will store the sum of this diagonal and we will compare if all other are equal or not, to decide for magic square.
   

    bool check=true;

    for(int i=0;i<order;i++)
    {
        
        if(SUMCOL[i]!=checker || SUMROWS[i]!=checker)
        {
            check=false;
        }
    }
    
    if(sumd1!=checker)   //NO need to check for sum of other diagonal. Because checker is that same thing.
    {
        check==false;
    }
        
    cout<<endl;

    if(!check)    //To decide if it is a magic box
    {
        cout<<"\n\n\tNot a Magic Box"<<endl;
    }
    else
        cout<<"\n\n\tMagic Box";

    return 0;
}