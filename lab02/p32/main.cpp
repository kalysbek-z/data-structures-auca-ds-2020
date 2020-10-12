#include <iostream>
using namespace std;

int main()
{
    int s1, s2, r1, r2;
    while (cin >> s1 >> s2 >> r1 >> r2 && (s1 + s2 + r1 + r2) != 0)
    {
        int n1 = (s1 == s2) ? max(s1, s2) * 10 + min(s1, s2) + 1000 : max(s1, s2) * 10 + min(s1, s2);
        int n2 = (r1 == r2) ? max(r1, r2) * 10 + min(r1, r2) + 1000 : max(r1, r2) * 10 + min(r1, r2);
        if (n1 == n2)
        {
            cout << "Tie.\n";
            continue;
        }
        else
        {
            if (n1 == 21 || n2 == 21)
            {
                (n1 == 21) ? cout << "Player 1 wins\n" : cout << "Player 2 wins\n";
            }
            else
            {
                (n1 > n2) ? cout << "Player 1 wins\n" : cout << "Player 2 wins\n";
            }
        }
    }
}