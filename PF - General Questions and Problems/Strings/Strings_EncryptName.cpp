#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout<<"Enter your Name: ";
    string input;
    getline(cin,input);

    int i=0;
    while(input[i]!='\0')
    {
        input[i]=tolower(input[i]);
        i++;
    }

    char Alphabets[6][5]=
    {
        {'a','b','c','d','e'},
        {'f','g','h','i','j'},
        {'k','l','m','n','o'},
        {'p','q','r','s','t'},
        {'u','v','w','x','y'},
        {'z','5','5','5','5'}
    };

    char Codes[6][5]=
    {
        {'A','m','d','G','K'},
        {'z','B','W','S','O'},
        {'k','C','F','n','*'},
        {'c','u','e','y','#'},
        {'p','w','Y','l','&'},
        {'q','5','5','5','5'}
    };
    
    int k=0;
    while(input[k]!='\0')
    {
        int rownum,colnum;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<6;j++)
            {
                if(input[k]==Alphabets[i][j])
                {
                    rownum=i,colnum=j;
                }
            }
        }
        cout<<input[k]<<endl;
        input[k]=Codes[rownum][colnum];
        k++;
    }

    cout<<input;
    return 0;
}