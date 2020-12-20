#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    //A
    int a[] = {3, 1, 20, 4, 7, 0, 5};
    auto p = find(begin(a), end(a), 0);

    if (p != end(a))
    {
        cout << p - (begin(a)) << "\n";
    }
    else
    {
        cout << "not found\n";
    }

    vector<int> b = {3, 1, 20, 4, 7, 0, 5};
    auto q = find(b.begin(), b.end(), 0);

    if (q != b.end())
    {
        cout << q - b.begin() << "\n";
    }
    else
    {
        cout << "not found\n";
    }
}