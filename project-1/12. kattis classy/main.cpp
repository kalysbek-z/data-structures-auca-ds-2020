#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<pair<string, string>> names;
        int t;
        string name, clas;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            getline(cin, name, ':');
            // cout << "name: " << name << "\n";
            cin.get();
            getline(cin, clas, ' ');
            cin.ignore(5, '\n');
            pair<string, string> p = make_pair(name, clas);
            names.push_back(p);
            // cout << "name " << names[i].first << " h: " << names[i].second << "\n";
        }

        stable_sort(names.begin(), names.end(), [](pair<string, string> &p1, pair<string, string> &p2) {
            int h1 = 0, h2 = 0;

            for (int i = 0; i < p1.second.size(); i++)
            {
                        }
        })
    }
}