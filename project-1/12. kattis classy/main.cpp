#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<pair<string, int>> names;
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            string name, clas, x;
            int rank = 0;
            cin >> name >> clas >> x;

            for (int j = 0; j < clas.size(); j++)
            {
                if (clas[j] == 'u')
                {
                    rank += 1;
                }
                if (clas[j] == 'm')
                {
                    rank += 0;
                }
                if (clas[j] == 'o')
                {
                    rank += -1;
                }
            }

            // cout << rank << "\n";
            pair<string, int> p = make_pair(name, rank);
            names.push_back(p);
            names[i].first.pop_back();
        }

        stable_sort(names.begin(), names.end(), [](pair<string, int> p1, pair<string, int> p2) {
            return p1.second > p2.second;
        });

        for (int i = 0; i < names.size(); i++)
        {
            cout << names[i].first << "\n";
        }
        cout << "==============================\n";
    }
}