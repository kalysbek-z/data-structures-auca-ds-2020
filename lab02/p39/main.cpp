#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int g, m;
        cin >> g >> m;
        vector<int> ag(g);
        vector<int> am(m);
        int maxG = numeric_limits<int>::min();
        int maxM = numeric_limits<int>::min();
        for (int i = 0; i < g; i++)
        {
            cin >> ag[i];
            if (maxG < ag[i])
            {
                maxG = ag[i];
            }
        }
        for (int i = 0; i < m; i++)
        {
            cin >> am[i];
            if (maxM < am[i])
            {
                maxM = am[i];
            }
        }
        // sort(ag.begin(), ag.end(), greater<int>());
        // sort(am.begin(), am.end(), greater<int>());
        // for (int i = 0; i < max(g, m); i++)
        // {
        //     if (ag[ag.size() - 1] >= am[am.size() - 1])
        //     {
        //         am.pop_back();
        //     }
        //     else if (ag[ag.size() - 1] < am[am.size() - 1])
        //     {
        //         ag.pop_back();
        //     }
        // }
        (maxG >= maxM) ? cout << "Godzilla\n" : cout << "MechaGodzilla\n";
    }
}