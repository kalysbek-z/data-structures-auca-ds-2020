#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    cout << "public message\n";

#ifndef NO_SECRETS
    cout << "secret message\n";
#endif
}