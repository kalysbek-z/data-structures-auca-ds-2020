#include <bits/stdc++.h>

using namespace std;

struct Freq
{
    /* data */
    char letter;
    int count;
    Freq(const char &l, int c) : letter(l), count(c)
    {
    }
};

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int r, c, m, n;
        cin >> r >> c >> m >> n;

        vector<Freq> freqs(r * c);

        for (int j = 0; j < freqs.size(); i++)
        {
            char l;
            cin >> l;
            freqs.emplace_back(l, 1);
        }

        sort(begin(freqs), end(freqs), [](const Freq &f) {

        });
    }
}