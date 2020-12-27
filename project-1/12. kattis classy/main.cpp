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
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            string name, clas, x;
            string rank;
            cin >> name >> clas >> x;
            for (int j = 0; j < clas.size(); j++)
            {
                if (clas[i] == 'u')
                {
                    rank += 'a';
                }
                if (clas[i] == 'm')
                {
                    rank += 'b';
                }
                if (clas[i] == 'o')
                {
                    rank += 'c';
                }
            }
            int l = rank.size();

            for (int j = 0; j < l / 2; j++)
            {
                swap(rank[j], rank[l - j - 1]);
            }

            while (l < 10)
            {
                l++;
                rank += 'b';
            }

            pair<string, string> p = make_pair(name, rank);
            names.push_back(p);
        }

        stable_sort(names.begin(), names.end());

        for (int i = 0; i < names.size(); i++)
        {
            cout << names[i].first << "\n";
        }
    }
}