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
    int min = INT_MAX;
    int min_i = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        if (j < min)
        {
            min = j;
            min_i = i;
        }
    }
    cout << min_i << endl;
}