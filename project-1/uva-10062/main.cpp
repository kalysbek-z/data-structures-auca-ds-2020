#include <bits/stdc++.h>

using namespace std;

struct Pair
{
    /* data */
    int ascii;
    int value;

    Pair(int a, int v) : ascii(a), value(v)
    {
    }
};

int main()
{
    string s;
    while (getline(cin, s))
    {
        vector<Pair> pair;
        vector<Pair> result;

        for (int i = 0; i < s.length(); i++)
        {
            int c = 0;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    c++;
                }
            }
            Pair p(s[i], c);
            pair.push_back(p);

            // cout << p.ascii << " " << p.value << "\n";
        }

        sort(begin(pair), end(pair), [](const Pair &p1, const Pair &p2) {
            return p1.value < p2.value;
        });

        for (int i = 0; i < pair.size(); i++)
        {
            cout << pair[i].ascii << " " << pair[i].value << "\n";
        }
    }
}