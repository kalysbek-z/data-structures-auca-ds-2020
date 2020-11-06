#include <iostream>
#include "../../libs/StrUtils.hpp"

using namespace std;

int main()
{
    for (string line; getline(cin, line);)
    {
        vector<string> r = split(line);
        for (const auto &w : r)
        {
            cout << w << "\n";
        }
    }
}