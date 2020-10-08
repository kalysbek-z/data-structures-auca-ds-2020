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
    vector<double> pr;
    for (int i = 0; i < n; i++)
    {
        pr.push_back(price(p, a, b, c, d, i));
    }

    double maxim = pr[0];
    double res = 0;
    for (int j = 1; j < n; j++)
    {
        res = max(maxim, maxim - pr[j]);
        maxim = max(maxim, pr[j]);
    }

    printf("%.9f", res);
}