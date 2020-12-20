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
    vector<Student> a;

    while (cin >> name >> x)
    {
        Student st(name, x);
        a.push_back(st);
    }

    cout << "sort by gpa:\n";
    sort(a.begin(), a.end(), [](const Student &g1, const Student &g2) { return g1.mGpa < g2.mGpa; });

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i].mGpa << " ";
    }
    cout << "\n";

    cout << "sort by name:\n";
    sort(a.begin(), a.end(), [](const Student &g1, const Student &g2) { return g1.mName < g2.mName; });
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i].mName << " ";
    }
    cout << "\n";
}