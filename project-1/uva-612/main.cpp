#include <bits/stdc++.h>

using namespace std;

struct SpecialString
{
    string sequence;
    int inversions;

    SpecialString(string s, int inv) : sequence(s), inversions(inv)
    {
    }
};

int countInversions(string s, int &n);

int main()
{
    int x;
    cin >> x;

    for (int i = x; i > 0; i--)
    {
        int n, m;
        cin >> n >> m;
        vector<SpecialString> dnas;

        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;
            SpecialString dna(s, countInversions(s, n));
            dnas.push_back(dna);
        }

        stable_sort(begin(dnas), end(dnas), [](const SpecialString &s1, const SpecialString &s2) {
            return s1.inversions < s2.inversions;
        });

        for (int i = 0; i < dnas.size(); i++)
        {
            cout << dnas[i].sequence << "\n";
        }
        if (i != 1)
        {
            cout << "\n";
        }
    }
}

int countInversions(string s, int &n)
{
    int inv = 0;

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (s[j] > s[j + 1])
            {
                swap(s[j], s[j + 1]);
                inv++;
            }
        }
    }
    return inv;
}