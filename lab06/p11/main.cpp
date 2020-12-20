#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {0, 4, 5, 10, 12, 20, 25, 40};

    int n;

    while (cin >> n)
    {
        auto it = lower_bound(v.begin(), v.end(), n);

        if (*it == n)
        {
            cout << "index of first element equal to " << n << " is " << it - v.begin() << "\n";
        }
        else if (*it > n)
        {
            cout << "index of first element greater than " << n << " is " << it - v.begin() << "\n";
        }
        else
        {
            cout << "no elements equal or greater than " << n << "\n";
        }
    }
}