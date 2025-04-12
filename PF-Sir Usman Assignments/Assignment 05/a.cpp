#include <iostream>

using namespace std;


const int SIZE = 4;

void func(int *arr, int p_arr[], int (*e_arr)[SIZE]){
cout << sizeof(*e_arr)<<endl;
}
int main()
{

    int arr[SIZE] = {3,4,2,5};

    func(arr,arr,&arr);
    return 0;
}