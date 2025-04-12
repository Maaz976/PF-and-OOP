/*
This program finds the determinant of a 2D matrix, using special cases, such as when a row is zero, 
determinant is zero or if two rows or cols are equal, determinant is again zero.
*/


#include <iostream>
using namespace std;

// Function prototypes
int determinant(int matrix[10][10], int n);
void getCofactor(int matrix[10][10], int temp[10][10], int p, int q, int n);
bool isZeroRowOrCol(int matrix[10][10], int n);
bool isRepeatedRowOrCol(int matrix[10][10], int n);
int findRowOrColWithMaxZeros(int matrix[10][10], int n, bool &isRow);

int main()
{
    int n;

    cout << "Enter the order of the square matrix (n x n): ";
    cin >> n;

    if (n <= 0 || n > 10)
    {
        cout << "Order must be between 1 and 10." << endl;
        return 1;
    }

    int matrix[10][10];

    cout << "Enter the elements of the matrix row by row:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Check for special cases
    if (isZeroRowOrCol(matrix, n))
    {
        cout << "The determinant of the matrix is: 0" << endl;
        return 0;
    }

    if (isRepeatedRowOrCol(matrix, n))
    {
        cout << "The determinant of the matrix is: 0" << endl;
        return 0;
    }

    int det = determinant(matrix, n);
    cout << "The determinant of the matrix is: " << det << endl;

    return 0;
}

// Function to calculate the determinant of a matrix
int determinant(int matrix[10][10], int n)
{
    if (n == 1)
        return matrix[0][0];

    int temp[10][10]; // To store cofactors
    int sign = 1, det = 0;

    bool isRow;
    int maxZeroIndex = findRowOrColWithMaxZeros(matrix, n, isRow);

    if (isRow)
    {
        // Expand along the row with maximum zeros
        for (int f = 0; f < n; f++)
        {
            if (matrix[maxZeroIndex][f] == 0)
                continue;

            // Get cofactor of matrix[maxZeroIndex][f]
            getCofactor(matrix, temp, maxZeroIndex, f, n);

            // Add the contribution of this cofactor
            det += sign * matrix[maxZeroIndex][f] * determinant(temp, n - 1);

            // Alternate the sign
            sign = -sign;
        }
    }
    else
    {
        // Expand along the column with maximum zeros
        for (int f = 0; f < n; f++)
        {
            if (matrix[f][maxZeroIndex] == 0)
                continue;

            // Get cofactor of matrix[f][maxZeroIndex]
            getCofactor(matrix, temp, f, maxZeroIndex, n);

            // Add the contribution of this cofactor
            det += sign * matrix[f][maxZeroIndex] * determinant(temp, n - 1);

            // Alternate the sign
            sign = -sign;
        }
    }

    return det;
}

// Function to get the cofactor of an element
void getCofactor(int matrix[10][10], int temp[10][10], int p, int q, int n)
{
    int i = 0, j = 0;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            // Skip the current row and column
            if (row != p && col != q)
            {
                temp[i][j++] = matrix[row][col];

                // Move to the next row when the current row is filled
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Function to check if a row or column is entirely zero
bool isZeroRowOrCol(int matrix[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool zeroRow = true, zeroCol = true;
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != 0)
                zeroRow = false;
            if (matrix[j][i] != 0)
                zeroCol = false;
        }
        if (zeroRow || zeroCol)
            return true;
    }
    return false;
}

// Function to check if any two rows or columns are identical
bool isRepeatedRowOrCol(int matrix[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            bool sameRow = true, sameCol = true;
            for (int k = 0; k < n; k++)
            {
                if (matrix[i][k] != matrix[j][k])
                    sameRow = false;
                if (matrix[k][i] != matrix[k][j])
                    sameCol = false;
            }
            if (sameRow || sameCol)
                return true;
        }
    }
    return false;
}

// Function to find the row or column with the maximum zeros
int findRowOrColWithMaxZeros(int matrix[10][10], int n, bool &isRow)
{
    int maxZeros = -1, index = -1;

    // Check rows for maximum zeros
    for (int i = 0; i < n; i++)
    {
        int zeroCount = 0;
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
                zeroCount++;
        }
        if (zeroCount > maxZeros)
        {
            maxZeros = zeroCount;
            index = i;
            isRow = true;
        }
    }

    // Check columns for maximum zeros
    for (int j = 0; j < n; j++)
    {
        int zeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] == 0)
                zeroCount++;
        }
        if (zeroCount > maxZeros)
        {
            maxZeros = zeroCount;
            index = j;
            isRow = false;
        }
    }

    return index;
}








