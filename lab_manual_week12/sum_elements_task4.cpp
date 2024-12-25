#include<iostream>
using namespace std;

int sum_elements(int matrix[][3], int rows);
int main()
{
    int rows;
    cout << "Enter the number of rows (columns ar aleways 3): ";
    cin >> rows;
    int matrix[rows][3];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter element[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "Sum of the elemts of the matrix: " << sum_elements(matrix, rows);
    return 0;
}

int sum_elements(int matrix[][3], int rows)
{
    int sum = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}