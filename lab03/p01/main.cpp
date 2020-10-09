#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 1;
    while(n-->0)
    {
        cout << "Case #" << c << ":\n";
        ++c;
        vector <string> name (10);
        vector <int> rel (10);
        int max = 0;
        for(int i = 0; i<10; i++)
        {
            cin >> name.at(i) >> rel.at(i);
            if(rel.at(i)>max)max=rel.at(i);
        }
        for (int i = 0; i < 10; i++)
        {
            if(rel.at(i) == max)
            {
                cout << name.at(i) << "\n";
            }
        }
    }
}