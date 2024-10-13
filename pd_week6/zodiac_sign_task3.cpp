#include<iostream>
using namespace std;

string zodiac_sign(string month, int dob);
int main()
{
    string month, sign;
    int dob;
    cout << "Enter the month (e.g January, February etc.): ";
    cin >> month;
    cout << "Enter date of birth: ";
    cin >> dob;
    sign = zodiac_sign(month, dob);
    cout << sign;
    return 0;
}



string zodiac_sign(string month, int dob)
{
    string sign;
    if((month == "March" && dob >= 21) || (month == "April" && dob <= 19))
        sign = "Aries";
    else if((month == "April" && dob >= 20) || (month == "May" && dob <= 20))
        sign = "Taurus";
    else if((month == "May" && dob >= 21) || (month == "June" && dob <= 20))
        sign = "Gemini";
    else if((month == "June" && dob >= 21) || (month == "July" && dob <= 22))
        sign = "Cancer";
    else if((month == "July" && dob >= 23) || (month == "August" && dob <= 22))
        sign = "Leo";
    else if((month == "August" && dob >= 23) || (month == "September" && dob <= 22))
        sign = "Virgo";
    else if((month == "September" && dob >= 23) || (month == "October" && dob <= 22))
        sign = "Libra";
    else if((month == "October" && dob >= 23) || (month == "November" && dob <= 21))
        sign = "Scorpio";
    else if((month == "December" && dob >= 22) || (month == "January" && dob <= 19))
        sign = "Capricorn";
    else if((month == "January" && dob >= 20) || (month == "Febraury" && dob <= 18))
        sign = "Aquarius";
    else if((month == "Febraury" && dob >= 19) || (month == "March" && dob <= 20))
        sign = "Pisces";
    else
        sign = "Wrong input";
    return sign;
}