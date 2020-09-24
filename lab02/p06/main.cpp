#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double res = 0;
    while (n-- > 0)
    {
        double q;
        double y;
        cin >> q >> y;
        res += q * y;
    }
    cout << res << "\n";
}