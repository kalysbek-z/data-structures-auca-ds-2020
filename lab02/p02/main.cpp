#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = (pow(2, n) + 1) * (pow(2, n) + 1);
    cout << i << "\n";
}