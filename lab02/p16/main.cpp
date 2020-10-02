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
    while (n-- > 0)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "Possible\n";
        }
        else if (a - b == c || b - a == c)
        {
            cout << "Possible\n";
        }
        else if (a * b == c)
        {
            cout << "Possible\n";
        }
        else if ((a / b == c && a % b == 0) || (b / a == c && b % a == 0) && a != 0 && b != 0)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }
}