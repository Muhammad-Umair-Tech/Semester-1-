#include<iostream>
using namespace std;

void multiply_matrices(int matA[][3], int matB[][3]);
void display_matrix(int mat[][3], int rows);
int main() {
    int matA[3][3] = {
        {1, 2, 3},
        {4, 2, 1},
        {3, 1, 2}
    };
    int matB[3][3] = {
        {2, 1, 3},
        {2, 2, 1},
        {1, 2, 3}
    };
    multiply_matrices(matA, matB);
    return 0;
}

void multiply_matrices(int matA[][3], int matB[][3]) {
    int result[3][3] = {0};
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            for (int k = 0; k < 3; k++) {
                result[row][col] += matA[row][k] * matB[k][col]; // row and col remain the same while k changes
            }
        }
    }
    display_matrix(result, 3);
}

void display_matrix(int mat[][3], int rows) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < 3; col++) {
            cout << mat[row][col] << " ";
        }
        cout << endl;
    }
}