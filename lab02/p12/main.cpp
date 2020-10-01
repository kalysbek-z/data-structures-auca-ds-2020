#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int g, s, c;
    cin >> g >> s >> c;
    int all = g * 3 + s * 2 + c * 1;
    string p;
    if (all >= 8)
    {
        p = "Province";
    }
    else if (all >= 5 && all < 8)
    {
        p = "Duchy";
    }
    else if (all >= 2 && all < 5)
    {
        p = "Estate";
    }
    string ore;
    if (all > 5)
    {
        ore = "Gold";
    }
    else if (all > 2)
    {
        ore = "Silver";
    }
    else if (all > 0)
    {
        ore = "Copper";
    }

    if (!p.empty())
    {
        p += " or ";
    }
    cout << p << ore << "\n";
}