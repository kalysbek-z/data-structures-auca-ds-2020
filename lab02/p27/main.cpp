#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        int x = 0;
        int res = 0;
        int f;
        cin >> f;
        while (cin >> t && t != 0)
        {
            if (t > 2 * f)
            {
                res += t - (2 * f);
            }
            f = t;
        }
        cout << res << "\n";
    }
}