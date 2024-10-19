#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float price, avg, total_price = 0, total_tonnage = 0;
    int cargos, tonnage, tonnage1 = 0, tonnage2 = 0, tonnage3 = 0;
    cout << "Enter the number of cargos: ";
    cin >> cargos;
    for(int i = 0; i < cargos; i++)
    {
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> tonnage;
        if(tonnage <= 3)
        {
            price = 200;
            tonnage1 += tonnage;
        }
        else if(tonnage > 3 && tonnage <= 11)
        {
            price = 175;
            tonnage2 += tonnage;
        }
        else if(tonnage > 11)
        {
            price = 120;
            tonnage3 += tonnage;
        } 
        total_price += price * tonnage;
        total_tonnage += tonnage;
    }
    avg = total_price / total_tonnage;
    cout << "Average cost per ton: " << fixed << setprecision(2) << avg << endl;
    cout << fixed << setprecision(2) << (tonnage1 / total_tonnage) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (tonnage2 / total_tonnage) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (tonnage3 / total_tonnage) * 100 << "%" << endl;
    return 0;
}