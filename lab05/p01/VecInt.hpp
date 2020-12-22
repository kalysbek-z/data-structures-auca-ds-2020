#pragma once
#include <cstddef>
#include <iostream>
#include <initializer_list>

class VecInt
{
    int *p;
    std::size_t sz;
    std::size_t cp;

public:
    VecInt()
        : p(nullptr), sz(0), cp(0)
    {
    }

    VecInt(std::size_t n);

    VecInt(std::initializer_list<int> init);

    VecInt(const VecInt &other);

    VecInt &operator=(const VecInt &other);

    VecInt(VecInt &&other)
        : p(other.p), sz(other.sz), cp(other.cp)
    {
        other.p = nullptr;
        other.sz = 0;
        other.cp = 0;
    }

    ~VecInt();

    int *begin() const
    {
        return p;
    }

    int *end() const
    {
        return p + sz;
    }

    std::size_t size() const
    {
        return sz;
    }

    int &operator[](std::size_t index)
    {
        return p[index];
    }

    const int &operator[](std::size_t index) const
    {
        return p[index];
    }

    void pushBack(int x);
};

bool operator==(const VecInt &a, const VecInt &b);

inline bool operator!=(const VecInt &a, const VecInt &b)
{
    return !(a == b);
}