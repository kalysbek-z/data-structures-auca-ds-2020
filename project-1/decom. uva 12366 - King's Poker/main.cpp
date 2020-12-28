#include <bits/stdc++.h>

using namespace std;

struct KingPokerHand
{
    int card1;
    int card2;
    int card3;

    KingPokerHand(int c1, int c2, int c3)
        : card1(c1), card2(c2), card3(c3)
    {
    }
};

int main()
{
    iostream::sync_with_stdio(false);

    vector<KingPokerHand> hands;
    for (int i = 0; i < 52; i++)
    {
        for (int j = i + 1; j < 52; j++)
        {
            for (int k = j + 1; k < 52; k++)
            {
                int r1 = i % 13;
                // cout << r1 << "\n";
                int r2 = j % 13;
                // cout << r2 << "\n";
                int r3 = k % 13;
                // cout << r3 << "\n";
                if (r1 == r2 || r1 == r3 || r2 == r3)
                {
                    hands.emplace_back(r1 + 1, r2 + 1, r3 + 1);
                }
            }
        }
    }

    sort(begin(hands), end(hands));

    for (int a, b, c; cin >> a >> b >> c && a + b + c > 0;)
    {
        KingPokerHand h(a, b, c);

        if (!binary_search(begin(hands), end(hands), h))
        {
            cout << hands.front() << "\n";
        }
        else if (h == hands.back())
        {
            cout << "*\n";
        }
        else
        {
            cout << *upper_bound(begin(hands), end(hands), h) << "\n";
        }
    }
}