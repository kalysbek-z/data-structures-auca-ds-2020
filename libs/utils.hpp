#pragma once

template <typename T>
void auSwap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

template <typename Iter, typename T>
Iter auFind(Iter beg, Iter end, const T &e)
{
    while (beg != end)
    {
        if (*beg == e)
        {
            return beg;
        }
        beg++;
    }
    return end;
}

template <typename Iter, typename Predicate>
Iter auFindIf(Iter beg, Iter end, Predicate p)
{
    while (beg != end)
    {
        if (p(*beg))
        {
            return beg;
        }
        beg++;
    }
    return end;
}

template <typename Iter>
Iter auMinElement(Iter beg, Iter end)
{
    if (beg == end)
    {
        return end;
    }
    Iter res = beg;
    beg++;
    while (beg != end)
    {
        if (*beg < *res)
        {
            res = beg;
        }
        beg++;
    }
    return res;
}

template <typename Iter, typename Predicate>
Iter auMinElement(Iter beg, Iter end, Predicate p)
{
    if (beg == end)
    {
        return end;
    }
    Iter res = beg;
    beg++;
    while (beg != end)
    {
        if (p(*beg, *res))
        {
            res = beg;
        }
        beg++;
    }
    return res;
}

template <typename Iter, typename Predicate>
void auSelectSort(Iter beg, Iter end, Predicate p)
{
    while (beg != end)
    {
        Iter iterToMin = auMinElement(beg, end, p);
        auSwap(*beg, *iterToMin);
        beg++;
    }
}

template <typename Iter, typename T>
Iter auLowerBound(Iter beg, Iter end, const T &k)
{
    while (beg != end)
    {
        auto mid = beg + (end - beg) / 2;

        if (*mid < k)
        {
            beg = ++mid;
        }
        else
        {
            end = mid;
        }
    }
    return beg;
}

template <typename Iter, typename T>
bool auBinarySearch(Iter beg, Iter end, const T &k)
{
    Iter lb = auLowerBound(beg, end, k);
    return *lb == k;
}

template <typename Iter, typename Predicate>
void auInsertSort(Iter beg, Iter end, Predicate p)
{
    auto i = beg + 1;

    while (i != end)
    {
        auto j = i - 1;
        auto t = *i;

        while (j - beg >= 0 && p(t, *j))
        {
            *(j + 1) = *j;
            j--;
        }
        *(j + 1) = t;
        i++;
    }
}

template <typename Iter>
void auReverse(Iter *beg, Iter *end)
{
    for (;;)
    {
        if (beg == end)
        {
            break;
        }

        --end;

        if (beg == end)
        {
            break;
        }

        auSwap(*beg, *end);
        beg++;
    }
}