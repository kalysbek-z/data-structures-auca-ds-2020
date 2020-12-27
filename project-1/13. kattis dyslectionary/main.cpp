#include <bits/stdc++.h>

using namespace std;

void make(vector<string> &v)
{
    int m = 0;
    for (auto i : v)
    {
        if (i.size() > m)
        {
            m = i.size();
        }
    }

    sort(v.begin(), v.end(), [](string s1, string s2) {
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        return s1 < s2;
    });

    for (auto &i : v)
    {
        int spaces = m - i.size();

        for (int i = 0; i < spaces; i++)
        {
            cout << " ";
        }
        cout << i << "\n";
    }
}

int main()
{
    string s;
    vector<string> v;
    while (getline(cin, s))
    {
        if (s == "")
        {
            make(v);
            cout << "\n";
            v.clear();
            continue;
        }

        v.push_back(s);
    }
    make(v);
}