#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << setfill('.') << fixed << setprecision(2);
    while (cin >> name)
    {
        double sum = 0;
        int nGrades = 0;
        int grade = 0;
        while (cin >> grade)
        {
            sum += grade;
            nGrades++;
        }
        if (nGrades != 0)
        {
            cout << left << setw(25) << name << " | " << right << setw(40) << sum / nGrades << "\n";
        }
        else
        {
            cout << left << setw(25) << name << " | " << right << setw(40) << "no data"
                 << "\n";
        }
        if (cin.fail())
        {
            cin.clear();
        }
    }
}