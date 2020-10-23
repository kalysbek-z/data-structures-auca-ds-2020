#include <bits/stdc++.h>

using namespace std;

string toRoman(int num)
{
    vector<int> numbers = {1, 4, 5, 9, 10, 40, 50, 90, 100};
    vector<string> romans = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c"};
    string rom = "";
    int total = 8;
    while (num > 0)
    {
        int ten = num / numbers[total];
        num = num % numbers[total];
        while (ten--)
        {
            rom += romans[total];
        }
        total--;
    }
    return rom;
}

int main()
{
    int num;
    while (cin >> num)
    {
        if (num == 0)
        {
            break;
        }
        else
        {
            string rom;
            int is = 0, vs = 0, xs = 0, ls = 0, cs = 0;
            for (int i = 1; i <= num; i++)
            {
                rom = toRoman(i);
                for (int j = 0; j < rom.length(); j++)
                {
                    if (rom[j] == 'i')
                    {
                        is++;
                    }
                    else if (rom[j] == 'v')
                    {
                        vs++;
                    }
                    else if (rom[j] == 'x')
                    {
                        xs++;
                    }
                    else if (rom[j] == 'l')
                    {
                        ls++;
                    }
                    else if (rom[j] == 'c')
                    {
                        cs++;
                    }
                }
            }
            cout << num << ": " << is << " i, " << vs << " v, " << xs << " x, " << ls << " l, " << cs << " c\n";
        }
    }
}