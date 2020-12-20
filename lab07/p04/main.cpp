#include "../../libs/utils.hpp"
#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    vector<int> a;

    while (cin >> x)
    {
        a.push_back(x);
    }

    auto p = auMinElement(a.begin(), a.end());

    if (p != a.end())
    {
        cout << *p << " index: " << p - a.begin() << "\n";
    }
    else
    {
        cout << "not found\n";
    }
}
