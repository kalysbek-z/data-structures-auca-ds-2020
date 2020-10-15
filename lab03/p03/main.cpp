#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> fam(n);
    for (int i = 0; i < n; i++)
    {
        cin >> fam[i];
    }
    string song[] = {"Happy", "birthday", "to", "you", "Happy", "birthday",
                     "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};

    for (int i = 0, j = 0, k = 0; i < (n / 16 + 1) * 16; i++, j++, k++)
    {
        if (j == n)
        {
            j = 0;
        }
        if (i % 16 == 0)
        {
            k = 0;
        }
        cout << fam[j] << ": " << song[k] << "\n";
    }
}