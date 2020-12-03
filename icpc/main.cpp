#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int c;
    bool used[s.size()];

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            for (int j = i; j < s.size(); j++)
            {
                if (s[j] == ')' && !used[j])
                {
                    used[j] = true;
                    c += 2;
                    j = s.size();
                    break;
                }
            }
        }
    }
    cout << c << endl;
}