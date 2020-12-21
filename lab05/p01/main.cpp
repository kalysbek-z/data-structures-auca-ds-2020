#include "../../libs/utils.hpp"
#include <iostream>
#define N 5
#define M 5

using namespace std;

class VecInt
{
    int *p;
    size_t sz;
    size_t cp;

public:
    VecInt()
        : p(nullptr), sz(0), cp(0)
    {
    }

    VecInt(size_t n)
        : p(new int[n]), sz(n), cp(n)
    {
        for (size_t i = 0; i < sz; i++)
        {
            p[i] = 0;
        }
    }

    ~VecInt()
    {
        delete[] p;
    }

    int *begin() const
    {
        return p;
    }

    int *end() const
    {
        return p + sz;
    }

    size_t size() const
    {
        return sz;
    }

    int &operator[](size_t index)
    {
        return p[index];
    }

    const int &operator[](size_t index) const
    {
        return p[index];
    }

    void pushBack(int x)
    {
        if (sz == cp)
        {
            int newCp = sz == 0 ? 1 : cp * 2;
            int *q = new int[newCp];
            for (size_t i = 0; i < sz; i++)
            {
                q[i] = p[i];
            }
            delete[] p;
            p = q;
            cp = newCp;
        }
        p[sz] = x;
        sz++;
    }
};

void problem04()
{
    int n;
    cin >> n;

    VecInt v(n);

    for (size_t i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    v.pushBack(12);

    for (int e : v)
    {
        cout << e << " ";
    }
    cout << "\n";

    auReverse(v.begin(), v.end());

    for (int e : v)
    {
        cout << e << " ";
    }
    cout << "\n";
}

void problem05()
{
    VecInt v;

    for (int x; cin >> x;)
    {
        v.pushBack(x);
    }

    for (int e : v)
    {
        cout << e << " ";
    }
    cout << "\n";

    auReverse(v.begin(), v.end());

    for (int e : v)
    {
        cout << e << " ";
    }
    cout << "\n";
}

int main(void)
{
    problem05();
}