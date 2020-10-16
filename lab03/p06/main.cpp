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
        int req = 0;
        bool found = false;
        vector<int> reqId;
        for (int i = 0; i < cat; i++)
        {
            int reqN;
            cin >> catC >> reqN;
            req += reqN;
            while (catC--)
            {
                int num;
                cin >> num;
                reqId.push_back(num);
            }
        }
        int count = 0;
        sort(reqId.begin(), reqId.end());
        for (auto i : reqId)
        {
            if (binary_search(id.begin(), id.end(), i))
            {
                count++;
            }
        }
        (count >= req) ? cout << "yes\n" : cout << "no\n";
    }
}