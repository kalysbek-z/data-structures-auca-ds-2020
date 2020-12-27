#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        /* code */
        vector<string> v;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.push_back(s);
        }

        stable_sort(v.begin(), v.end(), [](string s1, string s2) {
            return s1.substr(0, 2) < s2.substr(0, 2);
        });

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\n";
        }
        cout << "\n";
    }
}