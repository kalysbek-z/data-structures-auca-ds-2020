#include <iostream>

using namespace std;

int main()
{
    string inp, num;
    cin >> inp >> num;
    if ((inp == "OCT" && num == "31")||(inp == "DEC" && num == "25"))
    {
        cout << "yup\n";
    }
    else
    {
        cout << "nope\n";
    }
}