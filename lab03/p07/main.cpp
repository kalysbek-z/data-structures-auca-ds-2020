#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    int n = stoi(line);
    for (int i = 0; i < n; i++)
    {
        getline(cin, line);
        istringstream sinp(line);
        int c = 0;
        int cm = 0;
        int cf = 0;
        for (string s; sinp >> s;)
        {
            c++;
            cm += s[0] == 'M';
            cm += s[1] == 'M';
            cf += s[0] == 'F';
            cf += s[1] == 'F';
        }
        cout << (c > 1 && cm == cf ? "LOOP\n" : "NO LOOP\n");
    }
}