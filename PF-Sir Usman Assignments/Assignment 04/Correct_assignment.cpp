#include<iostream>
#include<iomanip>

using namespace std;
 int main()
 {
    int no_of_categories=2, no_of_products, no_of_batches;
    
    cout<<"\n\n\t/****Well Come to Warehouse Inventory and Management System****/"<<endl;
    char categories[2]={'D','F'};   //D for dairy and F for fruits Because we can't use strings.

    for(int i=0;i<2;i++) //Loop to go through different categories.
    {
        cout<<"Category: "<<categories[i]<<endl<<endl;
        //For 1st Category: Dairy.
        if(i==0)
        {
            char Products[2]={'M','C'};    // M for Milk, and C for Cheese.
            for(int j=0;j<2;j++)//Loop to go through various products within "Dairy" category.
            {
                cout<<"\tProduct: "<<Products[j]<<endl;

                //For 1st product: Milk
                if(j==0)
                {
                    int Batches[3]={3,7,0};
                    for(int k=0;k<3;k++)   //Loop to check different batches for expiry days.
                    {
                        if(Batches[k]<=0)   // Conditional statements to find if product has expired or will nearly or has long time.
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Product Has Expired. Remove Immdiately"<<endl;
                        }
                        else if(Batches[k]>0 && Batches[k]<=5)
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Product will expire in "<<Batches[k]<<" days. Be Careful!"<<endl;
                        }
                        else
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Long time to expire. Safe to keep!"<<endl;
                        }
                    }
                }

                //For 2nd Product: Cheese
                else if(j==1)
                {
                    int Batches[2]={4,12};
                    for(int k=0;k<2;k++)   //Loop to check different batches for expiry days.
                    {
                        if(Batches[k]<=0)   // Conditional statements to find if product has expired or will nearly or has long time.
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Product Has Expired. Remove Immdiately"<<endl;
                        }
                        else if(Batches[k]>0 && Batches[k]<=5)
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Product will expire in "<<Batches[k]<<" days. Be Careful!"<<endl;
                        }
                        else
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Long time to expire. Safe to keep!"<<endl;
                        }
                    }
                }
            }
        }

        // For 2nd Category: Fruits.
        else if(i==1)
        {
            char Products[2]={'A','G'};    // A for Apple, and G for Guvava.
            for(int j=0;j<2;j++)//Loop to go through various products within fruits category.
            {
                cout<<"\tProduct: "<<Products[j]<<endl;
                //For Apples
                if(j==0)
                {
                    int Batches[2]={0,9};
                    for(int k=0;k<3;k++)   //Loop to check different batches for expiry days.
                    {
                        if(Batches[k]<=0)   // Conditional statements to find if product has expired or will nearly or has long time.
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Product Has Expired. Remove Immdiately"<<endl;
                        }
                        else if(Batches[k]>0 && Batches[k]<=5)
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Product will expire in "<<Batches[k]<<" days. Be Careful!"<<endl;
                        }
                        else
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Long time to expire. Safe to keep!"<<endl;
                        }
                    }
                }

                //For Guvavas
                else if(j==1)
                {
                    int Batches[2]={7,18};
                    for(int k=0;k<3;k++)   //Loop to check different batches for expiry days.
                    {
                        if(Batches[k]<=0)   // Conditional statements to find if product has expired or will nearly or has long time.
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Product Has Expired. Remove Immdiately"<<endl;
                        }
                        else if(Batches[k]>0 && Batches[k]<=5)
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Product will expire in "<<Batches[k]<<" days. Be Careful!"<<endl;
                        }
                        else
                        {
                            cout<<"\t\tBatch "<< k+1 <<": Long time to expire. Safe to keep!"<<endl;
                        }
                    }
                }
            }
        }
        cout<<endl<<endl<<endl;
    }
    
    return 0;
 }