#include<iostream>
using namespace std;

void reaching_for_exam(int start_hr, int start_min, int reach_hr, int reach_min);
int main()
{
    int start_hr, start_min, reach_hr, reach_min;
    cout << "Enter exam starting time (hour): ";
    cin >> start_hr;
    cout << "Enter exam starting time (min): ";
    cin >> start_min;
    cout << "Enter student's hour of arrival: ";
    cin >> reach_hr;
    cout << "Enter student's minutrs of arrival: ";
    cin >> reach_min;
    reaching_for_exam(start_hr, start_min, reach_hr, reach_min);
    return 0;
}

void reaching_for_exam(int start_hr, int start_min, int reach_hr, int reach_min)
{
    int late, late_hr, late_min, early, early_hr, early_min;
    start_min = (start_hr * 60) + start_min;
    reach_min = (reach_hr * 60) + reach_min;
    late = reach_min - start_min;
    late_hr = late / 60;
    late_min = late % 60;
    early = start_min - reach_min;    
    early_hr = early / 60;
    early_min = early % 60;
    if(late > 0)
    {
        cout << "Late" << endl;
        cout << late_hr << " hours and " << late_min << " minutes late";
    }
    else if(late == 0)
    {
        cout << "On time";
    }
    else if(early <= 30 && early >= 0 && late < 0)
    {
        cout << "On time" << endl;
        cout << early_hr << " hours and " << early_min << " minutes early";
    }
    else if(early > 30 && late < 0)
    {
        cout << "Early" << endl;
        cout << early_hr << " hours and " << early_min << " minutes early";
    }
}