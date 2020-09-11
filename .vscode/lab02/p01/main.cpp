#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int res = 0;
    while (n != 0)
    {
        res += n % 10;

        n /= 10;
    }
    return res;
}

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int s = sumOfDigits(n);
        for (int i = 11; i <= 100; i++)
        {
            if (s == sumOfDigits(i * n))
            {
                cout << i << "\n";
                break;
            }
        }
    }
}