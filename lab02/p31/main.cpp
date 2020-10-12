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
    string n, m;
    cin >> n >> m;
    reverse(n.begin(), n.end());
    reverse(m.begin(), m.end());
    cout << max(n, m) << "\n";
}
