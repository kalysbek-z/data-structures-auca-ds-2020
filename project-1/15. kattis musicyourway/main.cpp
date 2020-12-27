#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ind;
    string s;
    getline(cin, s);

    vector<string> cat;
    cat.push_back("");

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
        for (int j = 0; j < cat.size(); j++)
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
                ind = i;
            }
        }

        stable_sort(v.begin(), v.end(), [ind](vector<string> v1, vector<string> v2) {
            return v1[ind] < v2[ind];
        });

        cout << s << "\n";
        for (auto i : v)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << "\n";
        }

        if (i != queries - 1)
        {
            cout << "\n";
        }
    }
}