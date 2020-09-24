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
    else if (n <= a + b + c && n >= 3)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}