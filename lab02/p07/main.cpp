#include <iostream>

using namespace std;

int main()
{
    int x, m;
    int d = 0;
    cin >> x >> m;
    while (m-- > 0)
    {
        int p;
        cin >> p;
        d += x - p;
    }
    cout << d + x << "\n";
}