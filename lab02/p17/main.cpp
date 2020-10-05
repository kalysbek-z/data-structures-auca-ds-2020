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
    bool boolean = true;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(10, ' ');
            continue;
        }
        if (b != i + 1)
        {
            boolean = false;
        }
    }
    if (boolean)
    {
        cout << "makes sense" << endl;
    }
    else
    {
        cout << "something is fishy" << endl;
    }
}