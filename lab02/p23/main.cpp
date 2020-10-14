    #include <iostream>
    #include <math.h>
    #include <string>
    #include <iomanip>
    #include <algorithm>
    #include <vector>
    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int n;
        while (cin >> n && n != -1)
        {
            int m, h;
            int t;
            int res;
            for (int i = 0; i < n; i++)
            {
                cin >> m >> h;
                if (i == 0)
                {
                    t = h;
                    res += t * m;
                }
                else
                {
                    t = h - t;
                    res += t * m;
                    t = h;
                }
            }
            cout << res << " miles\n";
            res = 0;
        }
    }