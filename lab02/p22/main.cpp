#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int c = 0;
    cin >> n;
    int res;
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        for (int k = 0; k < g; k++)
        {
            int x;
            cin >> x;
            if (k == 0)
            {
                c = x - 1;
            }
            if (x != c)
            {
                res = k;
            }
            c++;
        }
        cout << res + 1 << "\n";
    }
}