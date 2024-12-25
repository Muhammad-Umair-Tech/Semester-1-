#include<iostream>
using namespace std;

string effect(string arena[5][5], string coords);
int coord_to_int(char coord);
int main()
{
    string arena[5][5] = {
        {".", ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", ".", "*", "*", "."}
    };
    string coords;
    cout << "Enter coordinates: ";
    cin >> coords;
    cout << effect(arena, coords);
    return 0;
}

string effect(string arena[5][5], string coords)
{
    int row = coord_to_int(coords[0]);
    int col = coord_to_int(coords[1]);
    if(arena[row][col] == ".")
        return "Splash";
    else if(arena[row][col] == "*")
        return "BOOM";
}

int coord_to_int(char coord)
{
    int digit;
    if(coord == 'A')
        digit = 0;
    else if(coord == 'B')
        digit = 1;
    else if(coord == 'C')
        digit = 2;
    else if(coord == 'D')
        digit = 3;
    else if(coord == '1')
        digit = 0;
    else if(coord == '2')
        digit = 1;
    else if(coord == '3')
        digit = 2;
    else if(coord == '4')
        digit = 3;
    return digit;
}