#include <vector>
#include <string>

using namespace std;

string join(const vector<string> &v)
{
    string res;

    if (!v.empty())
    {
        res = v[0];
        for (size_t i = 1; i < v.size(); i++)
        {
            res += " ";
            res += v[i];
        }
    }
    return res;
}