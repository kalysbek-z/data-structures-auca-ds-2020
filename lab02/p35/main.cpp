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
    vector<int> v(3, 0);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    if (v[1] - v[0] == v[2] - v[1])
    {
        cout << v[2] + v[1] - v[0] << "\n";
    }
    else if (v[2] - (2 * v[1] + v[0]) == v[1] - v[0])
    {
        cout << v[2] - (v[1] - v[0]) << "\n";
    }
    else
    {
        cout << (v[2] + v[0] - v[1]) << "\n";
    }
}