#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

double price(double p, double a, double b, double c, double d, int k)
{
    double pr = p * (sin(a * k + b) + cos(c * k + d) + 2);
    return pr;
}

int main()
{
    int n;
    double p, a, b, c, d;
    cin >> p >> a >> b >> c >> d >> n;

    double maxim = numeric_limits<double>::min();
    double minim = numeric_limits<double>::min();
    double res = 0;
    for (int i = 1; i <= n; i++)
    {
        double pr = price(p, a, b, c, d, i);
        if (pr > maxim)
        {
            maxim = pr;
            minim = pr;
        }
        if (pr < minim || minim < 0)
        {
            minim = pr;
        }
        if (maxim - minim > res)
        {
            res = maxim - minim;
        }
    }
    printf("%.9f", res);
}