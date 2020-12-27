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

        stable_sort(names.begin(), names.end(), [](pair<string, string> p1, pair<string, string> p2) {
            int h1 = 1, h2 = 1;
            int pos = 0;
            string up = "upper";
            string mid = "middle";

            while ((pos = p1.second.find(up, pos)) != string::npos)
            {
                h1 *= 3;
                pos += up.length();
            }

            while ((pos = p1.second.find(mid, pos)) != string::npos)
            {
                h1 *= 2;
                pos += up.length();
            }

            pos = 0;

            while ((pos = p2.second.find(up, pos)) != string::npos)
            {
                h1 *= 3;
                pos += up.length();
            }

            while ((pos = p2.second.find(mid, pos)) != string::npos)
            {
                h2 *= 2;
                pos += up.length();
            }

            return h1 > h2;
        });

        for (int i = 0; i < names.size(); i++)
        {
            cout << names[i].first << "\n";
        }
    }
}