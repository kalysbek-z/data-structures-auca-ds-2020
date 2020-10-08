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
    int c = 1;
    int t;
    while (cin >> t)
    {
        int min = numeric_limits<int>::max();
        int max = numeric_limits<int>::min();
        for (int i = 0; i < t; i++)
        {
            int n;
            cin >> n;
            if (n < min)
            {
                min = n;
            }
            if (n > max)
            {
                max = n;
            }
        }
        cout << "Case " << c << ": " << min << " " << max << " " << max - min << "\n";
        c++;
    }
}