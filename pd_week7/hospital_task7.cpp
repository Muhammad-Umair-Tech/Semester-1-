#include<iostream>
using namespace std;

int main()
{
    int patients, days, treated, untreated;
    int total_treated = 0, total_untreated = 0, doctors = 7;
    cout << "Enter the number of days you visited the hospital: ";
    cin >> days;
    for(int day = 1; day <= days; day++)
    {
        if(day % 3 == 0 && total_untreated > total_treated)
            doctors++;
        cout << "No. of patients on day " << day << ": ";
        cin >> patients;
        if(patients > doctors)
        {
            untreated = patients - doctors;
            treated = patients - untreated;
        }    
        else
        {
            untreated = 0;
            treated = patients;
        }
        total_treated += treated;
        total_untreated += untreated;
    }
    cout << "Treated patients: " << total_treated << endl;
    cout << "Untreated patients: " << total_untreated << endl;
    return 0;
}