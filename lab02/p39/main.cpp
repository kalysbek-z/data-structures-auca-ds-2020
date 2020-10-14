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
        vector<int> ag(g);
        vector<int> am(m);
        for (int i = 0; i < g; i++)
        {
            cin >> ag[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> am[i];
        }
        sort(ag.begin(), ag.end(), greater<int>());
        sort(am.begin(), am.end(), greater<int>());
        for (int i = 0; i < max(g, m); i++)
        {
            if (ag[ag.size() - 1] >= am[am.size() - 1])
            {
                am.pop_back();
            }
            else if (ag[ag.size() - 1] < am[am.size() - 1])
            {
                ag.pop_back();
            }
            else
            {
                am.pop_back();
            }
        }
        (ag.size() > am.size()) ? cout << "Godzilla\n" : cout << "MechaGodzilla\n";
    }
}