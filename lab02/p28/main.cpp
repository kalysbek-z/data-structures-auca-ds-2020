#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

long double price(long double p, long double a, long double b, long double c, long double d, int k)
{
    long double pr = p * ((long double)sin(a * k + b) + (long double)cos(c * k + d) + 2);
    return pr;
}

int main()
{
    int n;
    long double p, a, b, c, d;
    cin >> p >> a >> b >> c >> d >> n;
    vector<long double> pr;
    for (int i = 0; i < n; i++)
    {
        pr.push_back(price(p, a, b, c, d, i));
    }

    long double maxim = pr[0];
    long double res = 0;
    for (int j = 1; j < n; j++)
    {
        res = max(res, maxim - pr[j]);
        maxim = max(maxim, pr[j]);
    }

    cout.precision(9);
    cout << fixed << res << "\n";
}