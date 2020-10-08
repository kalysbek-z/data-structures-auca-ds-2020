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
    while (n--)
    {
        long long p, r, f;
        long long c = 0;
        cin >> p >> r >> f;
        while (p <= f)
        {
            p *= r;
            c++;
        }
        cout << c << "\n";
        c = 0;
    }
}