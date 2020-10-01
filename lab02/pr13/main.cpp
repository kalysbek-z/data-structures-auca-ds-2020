#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    double n, m;
    cin >> n >> m;

    if (n == 0 && m == 1)
    {
        cout << "ALL GOOD\n";
    }
    else if (n != 0 && m == 1)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        printf("%.9f\n", -(n / (m - 1)));
    }
}