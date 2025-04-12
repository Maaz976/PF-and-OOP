#include<iostream>
#include<cmath>
using namespace std;

int *Distance(int *x1,int *y1,int *x2, int *y2, float *distance);

int main()
{
    cout<<"Enter the coordinates of P1: ";
    int x1, x2,y1,y2;
    float distance=0;
    float *dist = &distance;
    cin>>x1>>y1;
    cout<<"Enter the coordinates of P2: ";
    cin>>x2>>y2;

    Distance( &x1,&y1,&x2,&y2,&distance);
    cout<<distance;

}

int *Distance(int *x1,int *y1,int *x2, int *y2, float *distance)
{
    *distance = sqrt((*x2-*x1)*(*x2-*x1)+(*y2-*y1)*(*y2-*y1));
}