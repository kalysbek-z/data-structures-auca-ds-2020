#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int c = 1;
    while (cin >> s)
    {
        int n;
        int ii;
        int jj;
        int maxV;
        int minV;
        cout << "Case " << c << ":\n";
        c++;
        cin >> n;
        while (n--)
        {
            cin >> ii >> jj;
            bool norm = true;
            for (int i = min(ii, jj); i < max(ii, jj); i++)
            {
                if (s[i] != s[i + 1])
                {
                    norm = false;
                }
            }
            (norm) ? cout << "Yes\n" : cout << "No\n";
        }
    }
}