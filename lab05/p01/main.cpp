#include "../../libs/utils.hpp"
#include "VecInt.hpp"

#include <iostream>
#define N 5
#define M 5

using namespace std;

void problem0101()
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

void problem0102()
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

void problem0201()
{
    VecInt v;

    for (int n; cin >> n;)
    {
        v.pushBack(n);
    }

    VecInt w = v;

    auReverse(w.begin(), w.end());

    cout << (v == w ? "palindrome" : "not a palindrome") << "\n";
}

int main(void)
{
    problem0201();
}