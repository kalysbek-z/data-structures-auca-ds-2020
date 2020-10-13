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
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < t.size(); i++)
    {
        cin >> t[i];
    }
    int maxt = numeric_limits<int>::max();
    int d = 0;
    for (int i = 2; i < t.size(); i++)
    {
        if (max(t[i - 2], t[i]) < maxt)
        {
            maxt = max(t[i - 2], t[i]);
            d = i - 1;
        }
    }
    cout << d << " " << maxt << "\n";
}