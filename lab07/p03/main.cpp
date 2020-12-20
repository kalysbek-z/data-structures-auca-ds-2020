#include "../../libs/utils.hpp"
#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>

using namespace std;

struct GreaterThan
{
    /* data */
    int mx;

    GreaterThan(int x) : mx(x)
    {
    }

    bool operator()(int n) const
    {
        return n > mx;
    }
};

int main()
{
    int x;
    cin >> x;
    vector<int> a = {3, 1, 20, 4, 7, 0, 5};

    auto p = auFindIf(a.begin(), a.end(), GreaterThan(x));

    if (p != a.end())
    {
        cout << "index: " << p - a.begin() << "\n";
    }
    else
    {
        cout << "not found\n";
    }

    auto q = auFindIf(a.begin(), a.end(), [x](int n) { return n > x; });

    if (q != a.end())
    {
        cout << "lambda index: " << q - a.begin() << "\n";
    }
    else
    {
        cout << "not found\n";
    }
}