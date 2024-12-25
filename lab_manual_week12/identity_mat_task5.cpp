#include<iostream>
using namespace std;

bool is_identity_matrix(int matrix[][3]);
int main()
{
    bool result;
    int rows = 3;
    int cols = 3;
    int matrix[3][3];
    for(int row = 0; row < rows; row++)
    {
        for(int col = 0; col < cols; col++)
        {
            cout << "Enter the element [" << row << "][" << col << "]: ";
            cin >> matrix[row][col];
        }
    }
    result = is_identity_matrix(matrix);
    if(result == 0)
        cout << "Not an identity matrix." << endl;
    else 
        cout << "An identity matrix." << endl;
    for(int row = 0; row < rows; row++)
    {
        for(int col = 0; col < cols; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}


bool is_identity_matrix(int matrix[][3])
{
    bool error_found = false;
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            if(col == row)
            {
                if(matrix[row][col] != 1)
                {
                    error_found = true;
                    break;
                }
            }
            else
            {
                if(matrix[row][col] != 0)
                {
                    error_found = true;
                    break;
                }
            }
        }
        if(error_found == true)
            break;
    }
    return !error_found;
}