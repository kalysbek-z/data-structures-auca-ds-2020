#include <iostream>

using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;
    if (l != r)
    {
        cout << "Odd " << l * 2 + 1 << "\n";
    }
    else if (l == 0 && r == 0)
    {
        cout << "Not a moose"
             << "\n";
    }
    else
    {
        cout << "Even " << l + r << "\n";
    }
}