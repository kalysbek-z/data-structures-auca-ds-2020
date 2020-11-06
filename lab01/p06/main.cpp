#include <iostream>
#include "../../libs/StrUtils.hpp"

using namespace std;

int main()
{
    vector<vector<string>> vec = {
        {"hello", "world"}, {"1111", "222"}};

    for (auto &v : vec)
    {
        cout << join(v) << endl;
    }
}