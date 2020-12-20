#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>

using namespace std;

struct isEven
{
    /* data */
    bool operator()(int n) const
    {
        return n % 2 == 0;
    }
};

int main()
{
    vector<int> a = {3, 1, 20, 4, 7, 0, 5};
    isEven f;

    auto p = find_if(a.begin(), a.end(), f);
    // int ind;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     if (f(a[i]))
    //     {
    //         ind = i;
    //         break;
    //     }
    // }

    if (p != a.end())
    {
        cout << "first even num index (isEven)" << p - a.begin() << "\n";
    }
    else
    {
        cout << "not found\n";
    }

    auto q = find_if(a.begin(), a.end(), [](int n) { return n % 2 == 0; });

    if (q != a.end())
    {
        cout << "first even num index (lamda exp)" << q - a.begin();
    }
    else
    {
        cout << "not found\n";
    }
}