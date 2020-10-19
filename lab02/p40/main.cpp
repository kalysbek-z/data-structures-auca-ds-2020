#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<char>> loc(r);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char ch;
            cin >> ch;
            loc[i].push_back(ch);
            // cout << loc[i][j] << "\n";
        }
    }
    int row = 0, col = 0, count = 0;
    while (true)
    {
        if (row < 0 || col < 0 || row >= r || col >= c)
        {
            cout << "Out\n";
            break;
        }
        if (count > r * c)
        {
            cout << "Lost\n";
            break;
        }
        if (loc[row][col] == 'T')
        {
            cout << count << "\n";
            break;
        }
        else if (loc[row][col] == 'N')
        {
            row--;
        }
        else if (loc[row][col] == 'S')
        {
            row++;
        }
        else if (loc[row][col] == 'W')
        {
            col--;
        }
        else if (loc[row][col] == 'E')
        {
            col++;
        }
        count++;
    }
}