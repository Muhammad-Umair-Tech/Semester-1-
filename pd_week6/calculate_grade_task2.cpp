#include<iostream> // task 2 cp
using namespace std;

float calculate_avg(float marks_english, float marks_math, float marks_chemistry, float marks_biology, float marks_social_sci);
float calculate_p_age(float marks_english, float marks_math, float marks_chemistry, float marks_biology, float marks_social_sci);
float calculate_total(float marks_english, float marks_math, float marks_chemistry, float marks_biology, float marks_social_sci);
string calculate_grade(float marks_english, float marks_math, float marks_chemistry, float marks_biology, float marks_social_sci);

int main()
{
    string grade, name;
    float marks_english, marks_math, marks_chemistry, marks_biology, marks_social_sci, avg, p_age, total;
    cout << "Enter your name: "; 
    cin >> name;
    cout << "Enter obtained marks in English: ";
    cin >> marks_english;
    cout << "Enter obtained marks in math: ";
    cin >> marks_math;
    cout << "Enter obtained marks in chemistry: ";
    cin >> marks_chemistry;
    cout << "Enter obtained marks in biology: ";
    cin >> marks_biology;
    cout << "Enter obtained marks in social science: ";
    cin >> marks_social_sci;
    avg = calculate_avg(marks_english, marks_math, marks_chemistry, marks_biology, marks_social_sci);
    p_age = calculate_p_age(marks_english, marks_math, marks_chemistry, marks_biology, marks_social_sci);
    total = calculate_total(marks_english, marks_math, marks_chemistry, marks_biology, marks_social_sci);
    grade = calculate_grade(marks_english, marks_math, marks_chemistry, marks_biology, marks_social_sci);
    cout << "Student name: " << name << endl;
    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << avg << endl;
    cout << "Percentage: " << p_age << "%" << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}


float calculate_avg(float marks_english, float marks_math, float marks_chemistry, float marks_biology, float marks_social_sci)
{
    return (marks_english + marks_math + marks_chemistry + marks_biology + marks_social_sci) / 5;
}

float calculate_total(float marks_english, float marks_math, float marks_chemistry, float marks_biology, float marks_social_sci)
{
    return marks_english + marks_math + marks_chemistry + marks_biology + marks_social_sci;
}

float calculate_p_age(float marks_english, float marks_math, float marks_chemistry, float marks_biology, float marks_social_sci)
{
    return (calculate_total(marks_english, marks_math, marks_chemistry, marks_biology, marks_social_sci) / 500) * 100;
}

string calculate_grade(float marks_english, float marks_math, float marks_chemistry, float marks_biology, float marks_social_sci)
{
    string grade;
    float p_age = calculate_p_age(marks_english, marks_math, marks_chemistry, marks_biology, marks_social_sci);
    if(p_age >= 90)
        grade = "A+";
    else if(p_age >= 80 && p_age < 90)
        grade = "A";
    else if(p_age >= 70 && p_age < 80)
        grade = "B+";
    else if(p_age >= 60 && p_age < 70)
        grade = "B";
    else if(p_age >= 50 && p_age < 60)
        grade = "C";
    else if(p_age >= 40 && p_age < 50)
        grade = "D";
    else
        grade = "F";
    return grade;
}