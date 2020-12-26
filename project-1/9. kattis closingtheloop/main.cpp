#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        vector<int> r;
        vector<int> b;

        for (int i = 0; i < s; i++)
        {
            string str;
            cin >> str;

            if (str[str.size() - 1] == 'R')
            {
                r.push_back(stoi(str.substr(0, str.size() - 1)) - 1);
            }
            else
            {
                b.push_back(stoi(str.substr(0, str.size() - 1)) - 1);
            }
        }

        if (r.size() == 0 || b.size() == 0)
        {
            printf("Case #%d: %d\n", i + 1, 0);
        }
        else
        {
            sort(r.begin(), r.end());
            sort(b.begin(), b.end());
            reverse(r.begin(), r.end());
            reverse(b.begin(), b.end());

            int m = min(r.size(), b.size());

            int sum = 0;
            sum = accumulate(r.begin(), r.begin() + m, sum);
            sum = accumulate(b.begin(), b.begin() + m, sum);

            printf("Case #%d: %d\n", i + 1, sum);
        }
    }
}