#include<iostream>
using namespace std;

int count_sim_arrays(int matrix[][3], int rows);
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int matrix[rows][3];
    for(int row = 0; row < rows; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cout << "Enter element [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
    cout << "Number of identical arrays: " << count_sim_arrays(matrix, rows);
    return 0;
}

int count_sim_arrays(int matrix[][3], int rows)
{
    int count = 0;
    int current_row[3];
    bool sim = false; // sim: similar
    for(int c_row = 0; c_row < rows; c_row++) // c_row means current row
    {
        for(int col = 0; col < 3; col++) // copying a row into an array - selecting a row to compare
        {
            current_row[col] = matrix[c_row][col];
        }
        // comparing the array with the other rows from onwards the selected row
        for(int row = c_row + 1; row < rows; row++)
        {
            for(int col = 0; col < 3; col++)
            {
                if(matrix[row][col] == current_row[col])
                    sim = true;
                else
                {
                    sim = false;
                    break;
                }
            }
            if(sim == true)
                count++;
        }
    }
    return count;
}