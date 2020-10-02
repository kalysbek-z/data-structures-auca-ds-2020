#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n-- > 0)
    {
        string name, sc, age;
        int c;
        cin >> name >> sc >> age;
        cin >> c;

        if (sc >= "2010/00/00")
        {
            cout << name << " "
                 << "eligible\n";
            continue;
        }
        else if (age >= "1991/00/00")
        {
            cout << name << " "
                 << "eligible\n";
            continue;
        }
        else if (c > 40)
        {
            cout << name << " "
                 << "ineligible\n";
            continue;
        }
        else
        {
            cout << name << " "
                 << "coach petitions\n";
        }
    }
}