#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ind;
    string s;
    getline(cin, s);

    vector<string> cat;

    for (auto i : s)
    {
        if (i == ' ')
        {
            cat.push_back("");
        }
        else
        {
            cat.back().push_back(i);
        }
    }

    int n;
    cin >> n;
    vector<vector<string>> v;
    for (int i = 0; i < n; i++)
    {
        vector<string> song;
        for (int j = 0; j < cat.size(); i++)
        {
            string ss;
            cin >> ss;
            song.push_back(ss);
        }
        v.push_back(song);
    }

    int queries;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        string q;
        cin >> q;

        for (int i = 0; i < cat.size(); i++)
        {
            if (cat[i] == q)
            {
            }
        }
    }
}