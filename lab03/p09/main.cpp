#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, c, seq;
    while (cin >> n >> m >> c && n != 0 && m != 0 && c != 0)
    {
        seq++;
        vector<int> cons(n);
        vector<bool> turned(n, false);
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            cons[i] = num;
        }
        int sum = 0;
        int max = 0;
        bool fuse = false;
        for (int i = 0; i < m; i++)
        {
            int turn;
            cin >> turn;
            turned[turn - 1] = !turned[turn - 1];
            if (!fuse)
            {
                if (turned[turn - 1])
                {
                    sum += cons[turn - 1];
                    // cout << "sum: " << sum << endl;
                }
                else
                {
                    sum -= cons[turn - 1];
                    // cout << "sum: " << sum << endl;
                }
                if (sum <= c)
                {
                    if (sum > max)
                    {
                        max = sum;
                    }
                }
                else
                {
                    fuse = true;
                }
            }
        }
        cout << "Sequence " << seq << "\n";

        (fuse) ? cout << "Fuse was blown.\n\n" : cout << "Fuse was not blown.\n"
                                                      << "Maximal power consumption was " << max << " amperes.\n\n";
    }
}