#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int first = 1;
    while (cin >> n)
    {
        vector<string> names;
        for (int i = 0; i < n; i++)
        {
            string name1;
            cin >> name1;
            names.push_back(name1);
        }
        vector<int> moneyOfPeople(n, 0);
        for (int i = 0; i < n; i++)
        {
            string name2;
            int money, num;
            cin >> name2 >> money >> num;
            if (num == 0)
            {
                continue;
            }
            int forEach = money / num;
            moneyOfPeople[distance(names.begin(), find(names.begin(), names.end(), name2))] -= forEach * num;
            for (int j = 0; j < num; j++)
            {
                string name3;
                cin >> name3;
                moneyOfPeople[distance(names.begin(), find(names.begin(), names.end(), name3))] += forEach;
            }
        }
        if (first > 1)
        {
            cout << "\n";
        }
        for (int i = 0; i < n; i++)
        {
            cout << names[i] << " " << moneyOfPeople[i] << "\n";
        }
        first++;
    }
}