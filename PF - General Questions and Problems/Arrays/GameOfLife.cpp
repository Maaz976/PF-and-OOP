#include <iostream>
using namespace std;

void NextState(int array[6][5]);

int main()
{
    int array[6][5];

    // Step 1: Initialize the 6x5 matrix with 3
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = 3; // Padding with 3
        }
    }

    // Step 2: Input the inner 4x3 matrix
    cout << "Enter the 1st State (4x3 matrix): " << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cin >> array[i][j];
        }
    }

    // Step 3: Display the input state
    cout << "\nInitial State:" << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nNext State:\n";
    NextState(array);
    return 0;
}

void NextState(int array[6][5])
{
    int temp[6][5]; // Temporary matrix to store the next state

    // Step 1: Copy the original array to temp
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            temp[i][j] = array[i][j];
        }
    }

    // Step 2: Update the inner 4x3 matrix
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            int count_1s = 0;

            // Count live neighbors
            for (int k = -1; k <= 1; k++)
            {
                for (int l = -1; l <= 1; l++)
                {
                    if (!(k == 0 && l == 0))
                    { // Exclude the cell itself
                        if (array[i + k][j + l] == 1)
                        {
                            count_1s++;
                        }
                    }
                }
            }

            // Apply the rules of the Game of Life
            if (array[i][j] == 1 && (count_1s < 2 || count_1s > 3))
            {
                temp[i][j] = 0; // Live cell dies
            }
            else if (array[i][j] == 0 && count_1s == 3)
            {
                temp[i][j] = 1; // Dead cell becomes alive
            }
        }
    }

    // Step 3: Copy the updated state back to the original array
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            array[i][j] = temp[i][j];
        }
    }

    // Step 4: Display the updated state
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
