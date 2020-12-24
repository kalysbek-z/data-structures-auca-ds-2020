#include <bits/stdc++.h>

using namespace std;

struct Skill
{
    /* data */
    string name;
    int money;

    Skill(const string &n, int m) : name(n), money(m)
    {
    }
};

int main()
{
    int m, n;
    cin >> m >> n;
    vector<Skill> skills;

    for (int i = 0; i < m; i++)
    {
        string s;
        int num;
        cin >> s >> num;
        skills.emplace_back(s, num);
    }

    for (int i = 0; i < n; i++)
    {
        int points = 0;

        for (string w; cin >> w && w != ".";)
        {
            auto p = find_if(begin(skills), end(skills), [w](const Skill &s) {
                return w == s.name;
            });

            if (p != end(skills))
            {
                points += p->money;
            }
        }
        cout << points << "\n";
    }
}