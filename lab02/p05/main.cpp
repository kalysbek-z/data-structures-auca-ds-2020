#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long n1;
    long n2;
    while (cin >> n1 >> n2)
    {
        cout << abs(n1 - n2) << "\n";
    }
}