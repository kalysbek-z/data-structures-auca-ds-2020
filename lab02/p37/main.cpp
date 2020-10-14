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
    string names[n];
    int count = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> names[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (names[i] < names[i + 1])
        {
            count++;
        }
        else if (names[i] > names[i + 1])
        {
            count--;
        }
    }
    if (count == n)
    {
        cout << "INCREASING\n";
    }
    else if (count < 0)
    {
        cout << "DECREASING\n";
    }
    else
    {
        cout << "NEITHER\n";
    }
}