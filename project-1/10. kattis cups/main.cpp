#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, string>> cups;

    for (int i = 0; i < n; i++)
    {
        string v1, v2;
        cin >> v1 >> v2;
        pair<int, string> cup;

        int r;

        if (isdigit(v1[0]))
        {
            r = stoi(v1) / 2;
            cup.first = r;
            cup.second = v2;
        }
        else
        {
            r = stoi(v2);
            cup.first = r;
            cup.second = v1;
        }
        cups.push_back(cup);
    }

    sort(cups.begin(), cups.end(), [](const pair<int, string> &c1, const pair<int, string> &c2) { return c1.first < c2.first; });

    for (int i = 0; i < cups.size(); i++)
    {
        cout << cups[i].second << "\n";
    }
}