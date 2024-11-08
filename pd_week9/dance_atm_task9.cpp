#include<iostream>
using namespace std;

int main()
{
    
    bool invalid = false;
    string pin[4];
    int pin_nums[4];
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"}; 
    cout << "Enter your pin:" << endl;
    for(int i = 0; i < 4; i++)  // taking in string pin
    {
        cout << "Digit " << i + 1 << ": ";
        cin >> pin[i];
    }
    for(int i = 0; i < 4; i++)  // converting string pin into int pin
    {
        if(pin[i] == "0")
            pin_nums[i] = 0;
        else if(pin[i] == "1")
            pin_nums[i] = 1;
        else if(pin[i] == "2")
            pin_nums[i] = 2;
        else if(pin[i] == "3")
            pin_nums[i] = 3;
        else if(pin[i] == "4")
            pin_nums[i] = 4;
        else if(pin[i] == "5")
            pin_nums[i] = 5;
        else if(pin[i] == "6")
            pin_nums[i] = 6;
        else if(pin[i] == "7")
            pin_nums[i] = 7;
        else if(pin[i] == "8")
            pin_nums[i] = 8;
        else if(pin[i] == "9")
            pin_nums[i] = 9;
        else
            invalid = true;
    }
    if(invalid == false)    // converting int pin into dance moves
    {
        for(int i = 0; i < 4; i++)
        {
            if(i + pin_nums[i] > 9)
                cout << moves[(i + pin_nums[i]) - 10] << " ";
            else
                cout << moves[i + pin_nums[i]] << " ";
        }
    }
    else
        cout << "Invalid input";
    return 0;
}