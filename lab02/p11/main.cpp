#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int c = 0;
    if (m > n)
    {
        if (m - n == 1)
        {
            c = m - n;
            cout << "Dr. Chaz will have " << c << " piece of chicken left over!\n";
        }
        else
        {
            c = m - n;
            cout << "Dr. Chaz will have " << c << " pieces of chicken left over!\n";
        }
    }
    else
    {
        if (n - m == 1)
        {
            c = n - m;
            cout << "Dr. Chaz needs " << c << " more piece of chicken!\n";
        }
        else
        {
            c = n - m;
            cout << "Dr. Chaz needs " << c << " more pieces of chicken!\n";
        }
    }
}