#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n-- > 0)
    {
        int g, m;
        cin >> g >> m;
        int sg, sm;
        for (int i = 0; i < g; i++)
        {
            int army;
            cin >> army;
            sg += army;
        }
        for (int i = 0; i < m; i++)
        {
            int army;
            cin >> army;
            sm += army;
        }
        if (sg > sm || sg == sm)
        {
            cout << "Godzilla\n";
        }
        else if (sg < sm)
        {
            cout << "MechaGodzilla\n";
        }
        else
        {
            cout << "uncertain\n";
        }
    }
}