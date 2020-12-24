#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    sort(nums.begin(), nums.end());

    if (t == 1)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (binary_search(nums.begin(), nums.end(), 7777 - nums[i]))
            {
                cout << "Yes\n";
                return 0;
            }
        }
        cout << "No\n";
    }
    else if (t == 2)
    {
        auto it = unique(nums.begin(), nums.end());

        if (it == nums.end())
        {
            cout << "Unique\n";
        }
        else
        {
            cout << "Contains duplicate\n";
        }
    }
    else if (t == 3)
    {
        int res = -1;
        for (int i = 0; i < n / 2; i++)
        {
            if (nums[i] == nums[i + (n / 2)])
            {
                res = nums[i];
                break;
            }
        }
        cout << res << "\n";
    }
    else if (t == 4)
    {
        if (n % 2 == 0)
        {
            cout << nums[n / 2 - 1] << " " << nums[n / 2] << "\n";
        }
        else
        {
            cout << nums[n / 2] << "\n";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (nums[i] >= 100 && nums[i] <= 999)
            {
                cout << nums[i] << " ";
            }
        }
        cout << "\n";
    }
}