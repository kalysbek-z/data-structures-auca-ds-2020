#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    for (int x; cin >> x;)
    {
        n += x * x * x;
#ifndef NO_SECRETS
        cout << "new v " << x * x * x << "\n";
        cout << n << "\n";
#endif
    }
    cout << "wow: " << n << "\n";
}