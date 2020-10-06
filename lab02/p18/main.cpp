#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a, b;
    for (int i = 0; i < s.size(); i += 2)
    {
        if (s[i] == 'A')
        {
            a += s[i + 1];
        }
        else
        {
            b += s[i + 1];
        }
    }
    if (a >= 11 && a - b >= 2)
    {
        cout << "A\n";
        return 0;
    }

    if (b >= 11 && b - a >= 2)
    {
        cout << "B\n";
        return 0;
    }
}