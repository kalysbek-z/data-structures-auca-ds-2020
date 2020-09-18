#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    char p;
    string tf;
    vector<int> letter(26, 0);
    int points = 0;
    int c = 0;
    while (cin >> t && int(t != -1))
    {
        cin >> p >> tf;
        if (tf == "wrong")
        {
            ++letter[p - 'A'];
        }
        else if (tf == "right")
        {
            c++;
            points += t + (letter[p - 'A'] * 20);
        }
    }
    cout << c << " " << points << "\n";
}