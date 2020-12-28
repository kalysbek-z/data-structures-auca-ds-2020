#include <bits/stdc++.h>

using namespace std;

struct KingPokerHand
{
    int card1;
    int card2;
    int card3;

    KingPokerHand(int c1, int c2, int c3)
    {
        if (c1 > c2 && c1 > c3)
        {
            if (c2 > c3)
            {
                card2 = c2;
                card3 = c3;
            }
            else if (c3 > c2)
            {
                card2 = c3;
                card3 = c2;
            }
            card1 = c1;
        }
        if (c2 > c1 && c2 > c3)
        {
            if (c1 > c3)
            {
                card1 = c1;
                card3 = c3;
            }
            else if (c3 > c1)
            {
                card1 = c3;
                card3 = c1;
            }
            card2 = c2;
        }
        if (c3 > c1 && c3 > c2)
        {
            if (c1 > c2)
            {
                card1 = c1;
                card2 = c2;
            }
            else if (c2 > c1)
            {
                card1 = c2;
                card2 = c1;
            }
            card2 = c2;
        }
    }

    friend ostream &operator<<(ostream &out, const KingPokerHand &hand)
    {
        cout << hand.card1 << " "
             << hand.card2 << " "
             << hand.card3;

        return out;
    }

    bool operator<(const KingPokerHand &other) const
    {
        if (card1 == card2 && card2 == card3 && card1 == card3 &&
            other.card1 == other.card2 && other.card2 == other.card3 && other.card1 == other.card3)
        {
            return card1 < other.card1;
        }
        if ((card1 == card2 && card2 == card3 && card1 == card3) ||
            (other.card1 == other.card2 && other.card2 == other.card3 && other.card1 == other.card3))
        {
            return other.card1 == other.card2 && other.card2 == other.card3 && other.card1 == other.card3;
        }

        if (card1 == card2)
        {
            if (other.card1 == other.card2)
            {
                if (card1 != other.card1)
                {
                    return card1 < other.card1;
                }
                return card3 < other.card3;
            }

            if (other.card2 == other.card3)
            {
                if (card1 != other.card2)
                {
                    return card1 < other.card2;
                }
                return card3 < other.card1;
            }
            return false;
        }

        if (card2 == card3)
        {
            if (other.card2 == other.card3)
            {
                if (card2 != other.card2)
                {
                    return card2 < other.card2;
                }
                return card1 < other.card1;
            }
            if (other.card1 == other.card2)
            {
                if (card2 != other.card1)
                {
                    return card2 < other.card1;
                }
                return card1 < other.card3;
            }
            return false;
        }

        if (other.card1 == other.card2 || other.card2 == other.card3)
        {
            return true;
        }

        return card3 < other.card3;
    }

    bool operator==(const KingPokerHand &other) const
    {
        return card1 == other.card1 && card2 == other.card2 && card3 == other.card3;
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

    // for (int i = 0; i < hands.size(); i++)
    // {
    //     printf("%d %d %d\n", hands[i].card1, hands[i].card2, hands[i].card3);
    // }

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