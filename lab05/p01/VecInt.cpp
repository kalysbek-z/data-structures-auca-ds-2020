#include "VecInt.hpp"
#include "../../libs/utils.hpp"

VecInt::VecInt(std::size_t n)
    : p(new int[n]), sz(n), cp(n)
{
    for (std::size_t i = 0; i < sz; i++)
    {
        p[i] = 0;
    }
}

VecInt::VecInt(std::initializer_list<int> init)
    : p(new int[init.size()]), sz(init.size()), cp(init.size())
{
    auCopy(init.begin(), init.end(), p);
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

bool operator==(const VecInt &a, const VecInt &b)
{
    if (a.size() != b.size())
    {
        return false;
    }

    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

VecInt::VecInt(const VecInt &other)
    : p(new int[other.sz]), sz(other.sz), cp(other.cp)
{
    auCopy(other.begin(), other.end(), p);
}

VecInt &VecInt::operator=(const VecInt &other)
{
    if (this != &other)
    {
        int *newP = new int[other.sz];
        auCopy(other.begin(), other.end(), newP);
        delete[] p;
        p = newP;
        sz = other.sz;
        cp = other.cp;
    }
    return *this;
}