#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c;
    while (cin >> r >> c && (r != 0 && c != 0))
    {
        vector<string> v(c, "");

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                char c;
                cin >> c;
                v[j].push_back(c);
            }
        }

        stable_sort(v.begin(), v.end(), [](string s1, string s2) {
            for (auto &i : s1)
            {
                i = tolower(i);
            }

            for (auto &i : s2)
            {
                i = tolower(i);
            }

            return s1 < s2;
        });

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << v[j][i];
            }
            cout << "\n";
        }
        cout << "\n";
    }
}