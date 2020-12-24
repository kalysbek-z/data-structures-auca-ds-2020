#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>
#include <cctype>
#include <vector>
#include <string>

using namespace std;

class T
{
    int *p;
    int sz;

public:
    T(int n) : p((int *)malloc(sizeof(int) * n)), sz(n)
    {
        for (int i = 0; i < n; i++)
        {
            p[i] = 0;
        }
    }

    ~T()
    {
        free(p);
    }

    size_t size()
    {
        return sz;
    }

    int operator[](int index)
    {
        return p[index];
    }
};

main()
{
    int n;
    cin >> n;
    T t(n);

    for (size_t i = 0; i < t.size(); ++i)
    {
        cout << t[i];
    }
}