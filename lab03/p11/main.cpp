#include <bits/stdc++.h>

using namespace std;

void faceAce(vector<string> &s, int index, int &p1, int &p2)
{
    bool notBeaten = false;
    int lastCard;
    for (int i = index + 1; i < 4; i++)
    {
        if (s[i][2] == 'A')
        {
            notBeaten = false;
        }
        else if (s[i][2] == 'K')
        {
            /* code */
            notBeaten = false;
        }
        else if (s[i][2] == 'Q')
        {
            /* code */
            notBeaten = false;
        }
        else if (s[i][2] == 'J')
        {
            /* code */
            notBeaten = false;
        }
        else
        {
            notBeaten = true;
            lastCard = i;
        }
    }
    if (notBeaten)
    {
        if (lastCard % 2 == 0)
        {
            p2 += lastCard;
            p1 -= lastCard;
        }
        else
        {
            p1 += lastCard;
            p2 -= lastCard;
        }
    }
}

string deals(vector<string> &s)
{
    string winner = "qwerty";
    int p1 = 26;
    int p2 = 26;

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i][1])
        {
        case 'A':
            faceAce(s, i, p1, p2);
            winner = p1 + " " + p2;
            return winner;
            break;
        case 'K':
            /* code */
            break;
        case 'Q':
            /* code */
            break;
        case 'J':
            /* code */
            break;
        default:
            continue;
        }
    }

    return winner;
}
int main()
{
    string s;
    vector<string> cards;
    string res;
    while (cin >> s && s != "#")
    {
        cards.push_back(s);
    }
    res = deals(cards);
    cout << res;
}