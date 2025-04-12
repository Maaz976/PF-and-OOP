#include<iostream>
#include<string>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<>

using namespace std;

void SortAlphabetically(string strArray[])
{
    isdigit(strArray[5]);
    for(int i=0;i<9;i++)
    {   //{"asce","bcde","ploij","trerds","hfd","tre","egg","anda","Police","Fast"};
        for(int j=i+1;j<10;j++)
        {
            if(tolower(strArray[i][0])>tolower(strArray[j][0]))    //If first cell's strhas 1st letter D and 2nd cell's str has 1st letter A, str1[0]>
            {
                swap(strArray[i],strArray[j]);  
            }
        }
        
    }
}

void sortLengthwise(string strArray[10])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(strArray[i].length() >  strArray[j].length() )
            {
                swap(strArray[i],strArray[j]);
            }
        }
    }
}

int main()
{
    string strArray[10]={"bcde","ploij","asce","trerds","hfd","tre","egg","anda","Police","Fast"};
    SortAlphabetically(strArray);
    cout<<"Alpha: "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<strArray[i]<<"    ";
    }
    cout<<"Len: "<<endl;
    sortLengthwise(strArray);
    for(int i=0;i<10;i++)
    {
        cout<<strArray[i]<<"    ";
    }


    
    return 0;
}