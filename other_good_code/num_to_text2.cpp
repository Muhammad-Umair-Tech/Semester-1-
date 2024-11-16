// task 10 cp

#include<iostream>
using namespace std;

void num_to_text(int num);
string for_place1(int place1, int place2);
string for_place2(int place1, int place2);
int main()
{
    int num; 
    string text;
    cout << "Enter a number (1-99): ";
    cin >> num;
    num_to_text(num);
    return 0;
}




void num_to_text(int num)
{
    // separating number at place1 and place2 e.g 23: place1 = 2, place2 = 3
    int place1 = num / 10, place2 = num % 10; 
    string text1, text2;
    if(num / 10 > 0) // for 10 to 99 (inclusive)
    {
        text1 = for_place1(place1, place2);
        text2 = for_place2(place1, place2);
        cout << text1 << text2;
    }
    else // for 1 to 9 (inclusive)
    {
        text2 = for_place2(place1, place2);
        cout << text2;
    }     
}




string for_place1(int place1, int place2)
{
    string text1;
    if(place1 == 2)
        text1 = "twenty ";
    else if(place1 == 3)
        text1 = "thirty ";
    else if(place1 == 4)
        text1 = "forty ";
    else if(place1 == 5)
        text1 = "fifty ";
    else if(place1 == 6)
        text1 = "sixty ";
    else if(place1 == 7)
        text1 = "seventy ";
    else if(place1 == 8)
        text1 = "eighty ";
    else if(place1 == 9)
        text1 = "ninety ";
    else if(place1 == 1 && place2 == 0)
        text1 = "ten";
    else if(place1 == 1 && place2 == 1)
        text1 = "eleven";
    else if(place1 == 1 && place2 == 2)
        text1 = "twelve";
    else if(place1 == 1 && place2 == 3)
        text1 = "thirteen";
    else if(place1 == 1 && place2 == 4)
        text1 = "fourteen";
    else if(place1 == 1 && place2 == 5)
        text1 = "fifteen";
    else if(place1 == 1 && place2 == 6)
        text1 = "sixteen";
    else if(place1 == 1 && place2 == 7)
        text1 = "seventeen";
    else if(place1 == 1 && place2 == 8)
        text1 = "eighteen";
    else if(place1 == 1 && place2 == 9)
        text1 = "nineteen";
    return text1;
}

string for_place2(int place1, int place2)
{
    string text2;
    if(place1 != 1)
    {
        if(place2 == 1)
            text2 = "one";
        else if(place2 == 2)
            text2 = "two";
        else if(place2 == 3)
            text2 = "three";
        else if(place2 == 4)
            text2 = "four";
        else if(place2 == 5)
            text2 = "five";
        else if(place2 == 6)
            text2 = "six";
        else if(place2 == 7)
            text2 = "seven";
        else if(place2 == 8)
            text2 = "eight";
        else if(place2 == 9)
            text2 = "nine";
    }
    return text2;
}