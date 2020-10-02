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
        int a, b;
        cin.ignore(1000, '+');
        cin >> a >> b;
        string s;
        if (cin.fail())
        {
            cout << "skipped\n";
            cin.clear();
            cin >> s;
        }
        else
        {
            cout << (a + b) << "\n";
        }
    }
}