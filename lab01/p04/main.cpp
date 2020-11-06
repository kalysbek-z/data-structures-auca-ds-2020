#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

bool isPalindrome(const string &line)
{
    string b;
    for (auto e : line)
    {
        if (isalpha(e))
        {
            b += tolower(e);
        }
    }
    string t = b;
    reverse(t.begin(), t.end());
    return b == t;
}

int main()
{
    for (string line; getline(cin, line);)
    {
        cout << (isPalindrome(line) ? "palindrome\n" : "not a palindrome\n");
    }
}