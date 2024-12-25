#include<iostream>
using namespace std;

void change_matrix(int matrix[][5], int rows);
int find_largest_col_index(int matrix[][5], int rows);
int find_largest_index(int array[], int size);
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int matrix[rows][5];
    for(int row = 0; row < rows; row++)
    {
        for(int col = 0; col < 5; col++)
        {
            cout << "Enter element [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
    change_matrix(matrix, rows);
    return 0;
}

void change_matrix(int matrix[][5], int rows)
{
    int largest_col_index = find_largest_col_index(matrix, rows);
    int new_matrix[rows][5];
    for(int row = 0; row < rows; row++)
    {
        new_matrix[row][0] = matrix[row][largest_col_index]; 
        for(int col = 1; col < 5; col++)
        {
            if(col != largest_col_index)
                new_matrix[row][col] = matrix[row][col];
            else
                new_matrix[row][col] = matrix[row][0];
        }
    }
    // print the new matrix
    for(int row = 0; row < rows; row++)
    {
        for(int col = 0; col < 5; col++)
        {
            cout << new_matrix[row][col] << " ";
        }
        cout << endl;
    }
}


int find_largest_col_index(int matrix[][5], int rows)
{
    int sum;
    int sums[5];
    for(int col = 0; col < 5; col++)
    {
        sum = 0;
        for(int row = 0; row < rows; row++)
        {
            sum += matrix[row][col];
        }
        sums[col] = sum; // col can be used as the index for sums array
    }
    return find_largest_index(sums, 5);
}

int find_largest_index(int array[], int size)
{
    int index;
    int max = array[0];
    for(int i = 0; i < size; i++)
    {
        if(array[i] > max)
            index = i;
    }
    return index;
}