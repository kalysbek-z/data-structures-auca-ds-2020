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

        vector<Freq> freqs;

        int size = r * c;

        for (int j = 0; j < size; j++)
        {
            char l;
            cin >> l;
            freqs.emplace_back(l, 0);
        }

        sort(begin(freqs), end(freqs), [](Freq &f1, Freq &f2) {
            return f1.letter < f2.letter;
        });

        int letCount = 0;

        for (int i = 0; i < freqs.size(); i++)
        {
            for (int j = 0; j < freqs.size(); j++)
            {
                if (freqs[i].letter == freqs[j].letter)
                {
                    freqs[i].count++;
                }
            }
        }

        int maxim = 0;
        vector<char> max_l;
        int maxCount = 0;

        for (int i = 0; i < freqs.size(); i++)
        {
            if (freqs[i].count > maxim)
            {
                maxim = freqs[i].count;
                maxCount = 1;
                max_l.push_back(freqs[i].letter);
            }
            else if (freqs[i].count == maxim)
            {
                maxCount++;
            }
        }

        cout << "Case " << i + 1 << ": " << maxCount * m + (freqs.size() - maxCount) * n << "\n";
    }
}