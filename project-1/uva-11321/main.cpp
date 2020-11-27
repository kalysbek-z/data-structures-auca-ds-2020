#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int n, m; cin >> n >> m && (n != 0 || m != 0);)
    {
        vector<int> v(n);
        for (auto &e : v)
        {
            cin >> e;
        }

        sort(begin(v), end(v), [m](int a, int b) {
            int ra = a % m;
            int rb = b % m;

            if (ra < rb)
            {
                return true;
            }
            if (ra > rb)
            {
                return false;
            }

            if (a % 2 != 0 && b % 2 == 0)
            {
                return true;
            }
            if (a % 2 != 0 && b % 2 != 0)
            {
                return a > b;
            }
            if (a % 2 == 0 && b % 2 == 0)
            {
                return a < b;
            }
            return false;
        });

        cout << n << " " << m << "\n";

        for (auto e : v)
        {
            cout << e << "\n";
        }
    }
    cout << "0 0\n";
}