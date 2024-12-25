#include<iostream>
using namespace std;

int search_from_array(int cars[][5], int row, int col);
int add_coloumn_cars(int cars[][5], int rows, int col);
int add_row_cars(int cars[][5], int cols, int row);
int total_cars_of_colour(int cars[][5], string colour);
void invert_matrix(int cars[][5], int rows, int cols);
int main()
{
    int cars[5][5] = {{10, 7, 12, 10, 4},
                      {18, 11, 15, 17, 2},
                      {23, 19, 12, 16, 14},
                      {7, 12, 16, 0, 2},
                      {3, 5, 6, 2, 1}};
    int blue_toyota;
    int total_red_cars;
    int total_nissan_cars;
    string colour;
    int total_colour_cars;
    blue_toyota = search_from_array(cars, 1, 3);
    total_red_cars = add_coloumn_cars(cars, 5, 0);
    total_nissan_cars = add_row_cars(cars, 5, 2);
    cout << "Toyota blue cars: " << blue_toyota << endl;
    cout << "Total red cars: " << total_red_cars << endl;
    cout << "Total Nissan cars: " << total_nissan_cars << endl;
    cout << "Enter the colour whose total cars you want: ";
    cin >> colour;
    total_colour_cars = total_cars_of_colour(cars, colour);
    if(total_colour_cars == 0)
    {
        cout << "Invalid input.";
        return 0;
    }
    cout << "Total " << colour << " cars: " << total_colour_cars << endl;
    cout << "The matrix after inversion: " << endl;
    invert_matrix(cars, 5, 5);
    return 0;
}





int search_from_array(int cars[][5], int row, int col)
{
    int output = cars[row][col];
    return output;
}

int add_coloumn_cars(int cars[][5], int rows, int col)
{
    int sum = 0;
    for(int j = 0; j < rows; j++)
    {
        sum += cars[j][col];
    }
    return sum;
}

int add_row_cars(int cars[][5], int cols, int row)
{
    int sum = 0;
    for(int i = 0; i < cols; i++)
    {
        sum += cars[row][i];
    }
    return sum;
}

int total_cars_of_colour(int cars[][5], string colour)
{
    int col, rows = 5, sum = 0;
    if(colour == "red")
        col = 0;
    else if(colour == "black")
        col = 1;
    else if(colour == "brown")
        col = 2;
    else if(colour == "blue")
        col = 3;
    else if(colour == "gray")
        col = 4;
    else
        return 0;
    for(int i = 0; i < rows; i++)
    {
        sum += cars[i][col];
    }
    return sum;
}

void invert_matrix(int cars[][5], int rows, int cols)
{
    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            cout << cars[j][i] << "\t";
        }
        cout << endl;
    }
}
