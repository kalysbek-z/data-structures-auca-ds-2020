#include "../../libs/utils.hpp"
#include "VecInt.hpp"

#include <iostream>
#define N 5
#define M 5

using namespace std;

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