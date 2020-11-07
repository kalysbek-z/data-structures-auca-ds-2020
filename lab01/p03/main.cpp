#include <iostream>
#include <algorithm>

#include "utils.h"

using namespace std;

void badSwap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

void goodSwap1(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    cout << "1st int: ";
    int a;
    cin >> a;

    cout << "2nd int: ";
    int b;
    cin >> b;

    cout << "std swap:\n";
    cout << "Before: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After: a = " << a << ", b = " << b << endl;

    cout << "Bad swap:\n";
    cout << "Before: a = " << a << ", b = " << b << endl;
    badSwap(a, b);
    cout << "After: a = " << a << ", b = " << b << endl;

    cout << "good swap:\n";
    cout << "Before: a = " << a << ", b = " << b << endl;
    goodSwap1(a, b);
    cout << "After: a = " << a << ", b = " << b << endl;

    string x = "hi";
    string y = "hello";
    cout << "general swap:\n";
    cout << "Before: a = " << x << ", b = " << y << endl;
    autoSwap(x, y);
    cout << "After: a = " << x << ", b = " << y << endl;
}