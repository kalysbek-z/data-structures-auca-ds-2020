#include <bits/stdc++.h>

using namespace std;

int main()
{
    int duration, record;
    double dp, loan, forMonth, loanNow;
    vector<double> percent(101);
    while (cin >> duration >> dp >> loan >> record)
    {
        int m;
        double per;
        while (record--)
        {
            cin >> m >> per;
            for (int i = m; i < 101; i++)
            {
                percent[i] = per;
            }
        }
        forMonth = loan / duration;
        double price = (dp + loan) * (1 - percent[0]);
        loanNow = loan;
        int res = 0;
        while (price < loanNow)
        {
            res++;
            loanNow -= forMonth;
            price *= (1 - percent[res]);
        }
        if (res > 1)
        {
            cout << res << " months\n";
        }
        else
        {
            cout << res << " month\n";
        }
    }
}