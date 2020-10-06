#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    bool snowed = false;
    for (int i = 0; i < n; i++)
    {
        int di;
        cin >> di;
        if (di <= d)
        {
            snowed = true;
            cout << "It hadn't snowed this early in " << i << " years!";
            return 0;
        }
    }
    if (!snowed)
    {
        cout << "It had never snowed this early!";
    }
}