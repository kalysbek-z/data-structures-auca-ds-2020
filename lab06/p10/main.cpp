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
        /* code */
        if (binary_search(v.begin(), v.end(), n))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}