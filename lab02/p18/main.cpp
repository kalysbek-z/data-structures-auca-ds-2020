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
    int a = 0, b = 0;
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
    if (a > b)
    {
        cout << "A\n";
    }
    else
    {
        cout << "B\n";
    }
}