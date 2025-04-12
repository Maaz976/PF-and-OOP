#include<iostream>
#include<string>
#include<cstring>

using namespace std;
const int SIZE = 15;

void cStyleAndObjectStr(char *ptrS2)
{
    cout<<ptrS2<<" is a c-style string"<<endl;
}

void cStyleAndObjectStr(string *ptrS1)
{
    cout<<*ptrS1<<" is a C++ String Object"<<endl;
}


int main()
{
    string S1=" FAST-National University of Computer and Emerging Sciences ";
    char S2[SIZE]= {" FAST-NUCES "};

    string *ptrS1 = &S1;
    char *ptrS2 = S2;

/*  If two functions have same names but different arguments and these
Functions are called in main with their respective arguments, Compiler will
Decide on basis of argument, which one to enter. Here one Function has argument
as string pointer and the other has character. This will be used to make calling decision.  */

    cStyleAndObjectStr(ptrS2);   
    cStyleAndObjectStr(ptrS1);    

    return 0;
}