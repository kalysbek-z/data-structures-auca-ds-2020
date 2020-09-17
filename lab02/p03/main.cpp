#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    cin >> n;
    double res = n * (5280.0 / 4854.0) * 1000.0;
    cout << fixed << setprecision(0) << noshowpoint << res;
}