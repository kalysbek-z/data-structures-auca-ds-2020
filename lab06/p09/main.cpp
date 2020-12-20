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
    int age;
    double x;
    vector<tuple<string, int, double>> a;

    while (cin >> name >> age >> x)
    {
        tuple<string, int, double> emp;
        emp = make_tuple(name, age, x);
        a.push_back(emp);
    }

    cout << "sort by age:\n";
    sort(a.begin(), a.end(), [](const tuple<string, int, double> &g1, const tuple<string, int, double> &g2) {
        return get<1>(g1) < get<1>(g2);
    });
    for (int i = 0; i < a.size(); i++)
    {
        cout << get<0>(a[i]) << " " << get<1>(a[i]) << " " << get<2>(a[i]) << " ";
    }
    cout << "\n";
}