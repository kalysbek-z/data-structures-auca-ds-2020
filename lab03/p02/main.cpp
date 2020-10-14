#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
#include <iterator>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        string s, s2;
        int as;
        int pos = 0;
        vector<int> posit(num);
        for (int i = 0; i < num; i++)
        {
            cin >> s;
            if (s == "LEFT")
            {
                posit[i] = -1;
            }
            else if (s == "RIGHT")
            {
                posit[i] = 1;
            }
            else
            {
                cin >> s2 >> as;
                int index = as;
                posit[i] = posit[index - 1];
                // posit.push_back(posit[index - 1]);
            }
            pos += posit[i];
        }
        cout << pos << "\n";
    }
}