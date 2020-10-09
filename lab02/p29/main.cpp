#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        if (a == 0 && b == 0 && c == 0 && d == 0)
        {
            break;
        }
        int res = (1080 + ((a - b + 40) % 40) * 9 + ((c - b + 40) % 40) * 9 + ((c - d + 40) % 40) * 9);
        cout << res << "\n";
    }
}
