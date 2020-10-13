#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    v[0] = 1;
    for (int i = 0; i <= n - 2; i++)
    {
        int k;
        cin >> k;
        v[k + 1] = i + 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}