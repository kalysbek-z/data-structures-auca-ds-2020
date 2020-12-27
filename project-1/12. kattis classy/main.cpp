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
        string s;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            string name, clas, x;
            int rank = 0;
            getline(cin, s);
            getline(cin, name, ':');
            cin >> clas >> x;

            // for (int j = 0; j < clas.size(); j++)
            // {
            //     if (clas[j] == 'u')
            //     {
            //         rank += 1;
            //     }
            //     if (clas[j] == 'm')
            //     {
            //         rank += 0;
            //     }
            //     if (clas[j] == 'o')
            //     {
            //         rank += -1;
            //     }
            // }

            // cout << rank << "\n";
            pair<string, string> p = make_pair(name, clas);
            names.push_back(p);
            // names[i].first.pop_back();
        }

        sort(names.begin(), names.end(), [](pair<string, string> p1, pair<string, string> p2) {
            return p1.first < p2.first;
        });

        stable_sort(names.begin(), names.end(), [](pair<string, string> p1, pair<string, string> p2) {
            int rank1 = 0;
            for (int j = 0; j < p1.second.size(); j++)
            {
                if (p1.second[j] == 'u')
                {
                    rank1 += 1;
                }
                if (p1.second[j] == 'm')
                {
                    rank1 += 0;
                }
                if (p1.second[j] == 'o')
                {
                    rank1 += -1;
                }
            }

            int rank2 = 0;
            for (int j = 0; j < p2.second.size(); j++)
            {
                if (p2.second[j] == 'u')
                {
                    rank2 += 1;
                }
                if (p2.second[j] == 'm')
                {
                    rank2 += 0;
                }
                if (p2.second[j] == 'o')
                {
                    rank2 += -1;
                }
            }
            return rank1 > rank2;
        });

        for (int i = 0; i < names.size(); i++)
        {
            cout << names[i].first << "\n";
        }
        cout << "==============================\n";
    }
}