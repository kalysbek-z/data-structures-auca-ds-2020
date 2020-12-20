#include "../../libs/utils.hpp"
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

    auto gpa = auMinElement(a.begin(), a.end(), [](const Student &g1, const Student &g2) { return g1.mGpa < g2.mGpa; });

    if (gpa != a.end())
    {
        cout << (*gpa).mGpa << " index: " << gpa - a.begin() << "\n";
    }
    else
    {
        cout << "not found\n";
    }

    auto lex = auMinElement(a.begin(), a.end(), [](const Student &g1, const Student &g2) { return g1.mName < g2.mName; });

    if (lex != a.end())
    {
        cout << (*lex).mName << " index: " << lex - a.begin() << "\n";
    }
    else
    {
        cout << "not found\n";
    }
}