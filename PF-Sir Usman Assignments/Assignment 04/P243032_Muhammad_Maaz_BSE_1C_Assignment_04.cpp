#include<iostream>
using namespace std;

int main()
{
    int no_of_categories, no_of_products, no_of_batches;
    
    cout<<"\n\n\t****Well Come to Warehouse Inventory and Warehouse Management System****"<<endl;
    cout<<"\n\nPlease enter only First letter for names."<<endl;
    
    cout<<"Enter The number of categories: ";

    cin>>no_of_categories;
    char categories[no_of_categories];   //Array which will store different categories.

    int i=0;
    while(i<no_of_categories)
    {
        cout<<"\n\nEnter Category "<< i+1 <<" name:  ";  //Using i+1 because Oth product is not useful for end users.
        cin>>categories[i];

        cout<<"Enter number of products: ";
        cin>>no_of_products;

        char products[no_of_products];

        int j=0;
        while(j<no_of_products)
        {
            cout<<"Enter Product "<<j+1<<" name: ";
            cin>>products[j];

            cout<<"Enter no. of batches for this product: ";
            cin>>no_of_batches;

            int batches_expiry_days[no_of_batches];    //This array will store Remainig days for expiry of Product j batch k+1;

            int k=0;
            while(k<no_of_batches)
            {
                cout<<"Enter Remaining days for expiry: Batch " << k+1<<": ";
                cin>>batches_expiry_days[k];
                if(batches_expiry_days[k]<=0)
                {
                    cout<<"Batch "<<k+1<<" Expired! Remove Immediately."<<endl;
                }
                else if(batches_expiry_days[k]>0 && batches_expiry_days[k]<=5)
                {
                    cout<<"Near to expiry. Be Careful!"<<endl;
                }
                else 
                {
                    cout<<"Safe to keep!"<<endl;
                }
                 
                k++;
            }

            cout<<endl<<endl;
            

            j++;
        }

        i++;
        cout<<endl;
    }  
    return 0;
}
