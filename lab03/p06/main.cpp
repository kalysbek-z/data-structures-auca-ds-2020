#include <bits/stdc++.h>

using namespace std;

int main()
{
    int chosen, cat;
    while (cin >> chosen && chosen != 0 && cin >> cat)
    {
        vector<int> id;
        for (int i = 0; i < chosen; i++)
        {
            int num;
            cin >> num;
            id.push_back(num);
        }
        sort(id.begin(), id.end());
        int catC;
        int req;
        bool found = true;
        int num;
        for (int i = 0; i < cat; i++)
        {
            int count = 0;
            cin >> catC >> req;
            for (int j = 0; j < catC; j++)
            {
                cin >> num;
                if (binary_search(id.begin(), id.end(), num))
                {
                    count++;
                }
            }
            if (count < req)
            {
                found = false;
            }
        }
        cout << (found ? "yes\n" : "no\n");
    }
}