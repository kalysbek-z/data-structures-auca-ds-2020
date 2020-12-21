#include "VecInt.hpp"

VecInt::VecInt(std::size_t n)
    : p(new int[n]), sz(n), cp(n)
{
    for (std::size_t i = 0; i < sz; i++)
    {
        p[i] = 0;
    }
}

VecInt::~VecInt()
{
    delete[] p;
}

void VecInt::pushBack(int x)
{
    if (sz == cp)
    {
        std::size_t newCp = sz == 0 ? 1 : cp * 2;
        int *q = new int[newCp];
        for (std::size_t i = 0; i < sz; i++)
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