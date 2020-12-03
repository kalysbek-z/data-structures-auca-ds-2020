#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cases = 1;
    while (n--)
    {
        cout << "Case " << cases << ":\n";
        cases++;
        vector<string> sites(10);
        vector<int> rel(10);
        int maxim = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> sites[i] >> rel[i];

            if (rel[i] > maxim)
            {
                maxim = rel[i];
            }
        }

        for (int i = 0; i < 10; i++)
        {
            if (rel[i] == maxim)
            {
                cout << sites[i] << endl;
            }
        }
    }
}