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
    cout << n << ":\n";

    for (int i = 2; i <= n / 2 + 1; i++)
    {
        if (n % ( i + i - 1) == 0 || n % (i + i - 1) == i)
        {
            cout << i << "," << i - 1 << "\n";
        }
        if (n % i == 0)
        {
            cout << i << "," << i << "\n";
        }
    }
}