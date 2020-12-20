#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>

using namespace std;

struct Student
{
    string mName;
    double mGpa;
    Student(const string &name, double gpa)
        : mName(name), mGpa(gpa)
    {
    }
};

int main()
{
    string name;
    double x;
    vector<pair<string, double>> a;

    while (cin >> name >> x)
    {
        pair<string, double> st;
        st.first = name;
        st.second = x;
        a.push_back(st);
    }

    cout << "sort by name:\n";
    sort(a.begin(), a.end(), [](const pair<string, double> &g1, const pair<string, double> &g2) {
        if (g1.first == g2.first)
        {
            return g1.second < g2.second;
        }
        return g1.first < g2.first;
    });
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i].first << " " << a[i].second << " ";
    }
    cout << "\n";
}