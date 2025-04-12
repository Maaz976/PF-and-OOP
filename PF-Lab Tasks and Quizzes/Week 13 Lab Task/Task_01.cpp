#include<iostream>
using namespace std;
const int rows=4, col=5;

void arr_pass(int arr[rows][col]);
int main() 
{
    
    int mat[rows][col];

    cout << "Enter the values in array: " << endl;
    int i = 0;
    while (i < rows) {
        
        int j = 0;
        while (j < col) {
            
            cin >> mat[i][j];
            j++;
        }
        i++;
    }
    arr_pass(mat);
    
    return 0;
}

void arr_pass(int arr[rows][col])
{
    cout << endl;
    cout<<"The sorted table is: "<<endl;
    
    int row1[5];
    int j = 0;
    
    // Copy and sort row1
    while (j < col) {
        row1[j] = arr[0][j];
        j++;
    }
    int i = 0;
    while (i < 4) {
        j = 0;
        while (j < col - i - 1) {
            if (row1[j] > row1[j + 1]) {
                int temp = row1[j];
                row1[j] = row1[j + 1];
                row1[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 5) {
        cout << row1[i] << " ";
        i++;
    }
    cout << endl;

    // Copy and sort row2 in descending order
    int row2[5];
    j = 0;
    while (j < col) {
        row2[j] = arr[1][j];
        j++;
    }
    i = 0;
    while (i < 4) {
        j = 0;
        while (j < col - i - 1) {
            if (row2[j] < row2[j + 1]) {
                int temp = row2[j];
                row2[j] = row2[j + 1];
                row2[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 5) {
        cout << row2[i] << " ";
        i++;
    }
    cout << endl;

    // Copy and sort row3
    int row3[5];
    j = 0;
    while (j < col) {
        row3[j] = arr[2][j];
        j++;
    }
    i = 0;
    while (i < 4) {
        j = 0;
        while (j < col - i - 1) {
            if (row3[j] > row3[j + 1]) {
                int temp = row3[j];
                row3[j] = row3[j + 1];
                row3[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 5) {
        cout << row3[i] << " ";
        i++;
    }
    cout << endl;

    // Copy and sort row4 in descending order
    int row4[5];
    j = 0;
    while (j < col) {
        row4[j] = arr[3][j];
        j++;
    }
    i = 0;
    while (i < 4) {
        j = 0;
        while (j < col - i - 1) {
            if (row4[j] < row4[j + 1]) {
                int temp = row4[j];
                row4[j] = row4[j + 1];
                row4[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 5) {
        cout << row4[i] << " ";
        i++;
    }
    cout << endl;
}


/*
 int arr[3][3] =  ;





 */
