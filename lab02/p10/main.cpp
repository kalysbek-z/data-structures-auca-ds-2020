#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if (a == 0 || b == 0 || c == 0)
    {
        cout << "NO\n";
    }
    else if (b < a + b + c)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}