/*      Author : Muhammad Maaz
        Date : 01 / 12 / 2024
This program is designed for a Vending Machine.*/


#include<iostream>
using namespace std;

const int pepsicost = 7; const int cokecost = 5; const int spritecost = 7; const int up7cost = 3;

char Display();
void AvailableQuantityandcost(char *choice,int *ptrnumpepsi,int *ptrnumcoke, int *ptrnumsprite, int *ptrnum7up, int *ptrquantity);
bool checkAvailibility(char *ptrchoice,int *ptrnumpepsi,int *ptrnumcoke, int *ptrnumsprite, int *ptrnum7up,int *ptrquantity);
void updatequantity(char *ptrchoice,int *ptrnumpepsi,int *ptrnumcoke, int *ptrnumsprite, int *ptrnum7up,int *ptrquantity);
int CalculateBill(int *ptrquantity, char *ptrchoice);

int main()
{
    int numpepsi=10, numcoke=15, numsprite=25, num7up=17;   int quantity;  int *ptrquantity = &quantity;
    int *ptrnumpepsi = &numpepsi, *ptrnumcoke = &numcoke, *ptrnumsprite=&numsprite,*ptrnum7up=&num7up;
    char input;
    do
    {
        char choice = Display();
        
        char *ptrchoice = &choice;
        
        
        do
        {
            AvailableQuantityandcost(&choice,&numpepsi,&numcoke,&numsprite,&num7up,&quantity);
            if(checkAvailibility(&choice,&numpepsi,&numcoke,&numsprite,&num7up,&quantity))
            {        
                updatequantity(&choice,&numpepsi,&numcoke,&numsprite,&num7up,&quantity);
                int bill = CalculateBill(&quantity,&choice);
                cout<<"Your Total Bill is: "<<bill<<"$"<<endl;


                cout<<endl<<"Do you want to reuse(Y for yes, N for no): ";
                cin>>input;
            }

        }while(!checkAvailibility(&choice,&numpepsi,&numcoke,&numsprite,&num7up,&quantity));
        
    }while(input=='y');


    
    return 0;
}

char Display()
{
    char choice;

    cout<<"\n\n\t====Items==== "<<endl;
    cout<<"\n\t1:Pepsi"<<endl;
    cout<<"\t2:Coke"<<endl;
    cout<<"\t3:7UP"<<endl;
    cout<<"\t4:Sprite"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    

    return choice;
}

void AvailableQuantityandcost(char *ptrchoice,int *ptrnumpepsi,int *ptrnumcoke, int *ptrnumsprite, int *ptrnum7up,int *ptrquantity)
{
    switch(*ptrchoice)
    {
        case 'p':
            cout<<"Available Quantity : "<<*ptrnumpepsi<<endl;
            cout<<"Cost per unit: "<<pepsicost<<endl;
            break;
        case 'c':
            cout<<"Available Quantity : "<<*ptrnumcoke<<endl;
            cout<<"Cost per unit: "<<cokecost<<endl;
            break;
        case 's':
            cout<<"Available Quantity : "<<*ptrnumsprite<<endl;
            cout<<"Cost per unit: "<<spritecost<<endl;
            break;
        case '7':
            cout<<"Available Quantity : "<<*ptrnum7up<<endl;
            cout<<"Cost per unit: "<<up7cost<<endl;
            break;  
        default:
            cout<<"Invalid Input! "<<endl;          
    }

    cout<<"Enter the Quantity: ";
    cin>>*ptrquantity;
}

bool checkAvailibility(char *ptrchoice,int *ptrnumpepsi,int *ptrnumcoke, int *ptrnumsprite, int *ptrnum7up,int *ptrquantity)
{
    if(*ptrchoice=='p' && *ptrquantity>*ptrnumpepsi )
    {
        cout<<"Enter According to available quantity! "<<endl;
        return false;
    }
    else if(*ptrchoice=='c' && *ptrquantity>*ptrnumcoke)
    {
        cout<<"Enter According to available quantity! "<<endl;
        return false;
    }
    else if(*ptrchoice=='7' && *ptrquantity>*ptrnum7up)
    {
        cout<<"Enter According to available quantity! "<<endl;
        return false;
    }
    else if(*ptrchoice=='s' && *ptrquantity>*ptrnumsprite)
    {
        cout<<"Enter According to available quantity! "<<endl;
        return false;
    }
    return true;
}

void updatequantity(char *ptrchoice,int *ptrnumpepsi,int *ptrnumcoke, int *ptrnumsprite, int *ptrnum7up,int *ptrquantity )
{
    switch(*ptrchoice)
    {
        case 'p':
            *ptrnumpepsi -= *ptrquantity;
            break;
        case 'c':
            *ptrnumcoke -= *ptrquantity;
            break;
        case 's':
            *ptrnumsprite -= *ptrquantity;
            break;
        case '7':
            *ptrnum7up -= *ptrquantity;
            break;
    }

}

int CalculateBill(int *ptrquantity, char *ptrchoice)
{
    if(*ptrchoice=='p')
    {
        return *ptrquantity * pepsicost;
    }
    else if(*ptrchoice=='c')
    {
        return *ptrquantity * cokecost;
    }
    else if(*ptrchoice=='s')
    {
        return *ptrquantity * spritecost;
    }
    else if(*ptrchoice=='7')
    {
        return *ptrquantity * up7cost;
    }

}









