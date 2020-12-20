#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>
#include "../../libs/utils.hpp"

using namespace std;

int main()
{
    //A
    int a[] = {3, 1, 20, 4, 7, 0, 5};
    int nums[] = {3, 20, 100, -5, 4};

    for (int i = 0; i < 5; i++)
    {
        auto p = auFind(begin(a), end(a), nums[i]);

        if (p != end(a))
        {
            cout << p - (begin(a)) << "\n";
        }
        else
        {
            cout << "not found\n";
        }
    }

    for (int i = 0; i < 5; i++)
    {
        vector<int> b = {3, 1, 20, 4, 7, 0, 5};
        auto q = auFind(b.begin(), b.end(), nums[i]);

        if (q != b.end())
        {
            cout << q - b.begin() << "\n";
        }
        else
        {
            cout << "not found\n";
        }
    }
}