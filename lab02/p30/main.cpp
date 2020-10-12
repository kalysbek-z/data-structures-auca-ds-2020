#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long numOfDigits(long n)
{
    long m = 0;
    while (n != 0)
    {
        n = n / 10;
        m++;
    }
    return m;
}

int main()
{
    string n;
    while (true)
    {
        cin >> n;
        if (n == "END")
        {
            break;
        }
        else
        {
            long c = 2;
            long nod = n.size();
            if (nod > 1)
            {
                while (nod != 1)
                {
                    nod = numOfDigits(nod);
                    c++;
                }
                cout << c << "\n";
            }
            else if (n == "1")
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << c << "\n";
            }
        }
    }
}